#include <winsock2.h> //Biblioteca da Microsoft para comunicação em rede (Sockets)
#include <stdio.h>

#pragma comment(lib, "ws2_32.lib") //Informa ao compilador para usar a biblioteca ws2_32 (necessária para Winsock)

#define PORT 8080 //Define a porta onde o servidor irá escutar
#define BUFFER_SIZE 4096 //Tamanho do buffer usado para envio/recebimento de dados

int main(){
    WSADATA wsa; // Estrutura usada para inicializar o Winsock
    SOCKET server_socket, client_socket; //Variáveis para os sockets do servidor e do cliente
    struct sockaddr_in server_addr, client_addr; //Estrutura para armazenar os endereços IP e Porta
    int client_len = sizeof(client_addr); //Tamanho da estrutura do endereço do cliente
    char buffer[BUFFER_SIZE]; //Buffer usado para armazenar os dados recebidos

    // Inicializa a biblioteca Winsock (obrigatório no Windows antes de usar sockets)
    WSAStartup(MAKEWORD(2, 2), &wsa);  // Usa a versão 2.2 do Winsock

    // Cria um socket do tipo TCP (SOCK_STREAM), usando IPv4 (AF_INET)
    server_socket = socket(AF_INET, SOCK_STREAM, 0);

     // Define os parâmetros do endereço do servidor
    server_addr.sin_family = AF_INET;            // Usa IPv4
    server_addr.sin_addr.s_addr = INADDR_ANY;    // Aceita conexões de qualquer endereço IP
    server_addr.sin_port = htons(PORT);          // Define a porta em formato de rede (big endian)

      // Liga (bind) o socket criado ao endereço e porta definidos acima
    bind(server_socket, (struct sockaddr*)&server_addr, sizeof(server_addr));

    // Coloca o socket para escutar conexões (máximo de 5 na fila)
    listen(server_socket, 5);

      // Informa no console que o servidor está rodando
    printf("Servidor rodando na porta %d...\n", PORT);

    // Loop principal que aceita e trata conexões dos clientes
    while (1) {
        // Espera por uma conexão de um cliente (bloqueia até alguém conectar)
        client_socket = accept(server_socket, (struct sockaddr*)&client_addr, &client_len);

        // Recebe os dados enviados pelo cliente (a requisição HTTP)
        recv(client_socket, buffer, BUFFER_SIZE - 1, 0);

        // Exibe no console a requisição recebida (útil para debug)
        printf("Requisição recebida:\n%s\n", buffer);

        // Tenta abrir o arquivo html/index.html no modo leitura
        FILE* file = fopen("html/index.html", "r");

        // Se o arquivo foi aberto com sucesso (ou seja, existe)
        if (file) {
            // Define o cabeçalho HTTP indicando sucesso (status 200)
            const char* header = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n";

            // Envia o cabeçalho HTTP para o cliente
            send(client_socket, header, strlen(header), 0);

            // Prepara para enviar o conteúdo do arquivo em blocos
            char content[BUFFER_SIZE];
            int bytes;

            // Lê o conteúdo do arquivo em blocos e envia para o cliente
            while ((bytes = fread(content, 1, BUFFER_SIZE, file)) > 0) {
                send(client_socket, content, bytes, 0);
            }

            // Fecha o arquivo após o envio completo
            fclose(file);
        } else {
            // Se o arquivo não for encontrado, envia uma página HTML simples com erro 404
            const char* not_found =
                "HTTP/1.1 404 Not Found\r\n"
                "Content-Type: text/html\r\n\r\n"
                "<html><body><h1>404 Not Found</h1></body></html>";

            // Envia essa resposta de erro para o cliente
            send(client_socket, not_found, strlen(not_found), 0);
        }

        // Fecha a conexão com o cliente após tratar a requisição
        closesocket(client_socket);
    }

    // Após sair do loop (o que não acontece nesse caso), fecha o socket principal
    closesocket(server_socket);

    // Libera os recursos usados pelo Winsock
    WSACleanup();

    return 0; // Fim do programa
}
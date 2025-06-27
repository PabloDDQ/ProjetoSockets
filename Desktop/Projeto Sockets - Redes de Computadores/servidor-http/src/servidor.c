#include <winsock2.h>   // Biblioteca para comunicação via socket (Windows)
#include <stdio.h>      // Funções padrão como printf e fopen
#include <string.h>     // Para strlen

#pragma comment(lib, "ws2_32.lib")  // Linka Winsock automaticamente no Windows

#define PORT 8080
#define BUFFER_SIZE 4096

int main() {
    WSADATA wsa;
    SOCKET server_socket, client_socket;
    struct sockaddr_in server_addr, client_addr;
    int client_len = sizeof(client_addr);
    char buffer[BUFFER_SIZE];

    // Inicializa Winsock versão 2.2
    WSAStartup(MAKEWORD(2, 2), &wsa);

    // Cria socket TCP IPv4
    server_socket = socket(AF_INET, SOCK_STREAM, 0);

    // Configura endereço do servidor
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY; // Qualquer IP local
    server_addr.sin_port = htons(PORT);

    // Associa socket ao endereço e porta
    bind(server_socket, (struct sockaddr*)&server_addr, sizeof(server_addr));

    // Escuta conexões, fila até 5 clientes
    listen(server_socket, 5);

    printf("Servidor rodando na porta %d...\n", PORT);

    while (1) {
        // Aceita conexão do cliente (bloqueante)
        client_socket = accept(server_socket, (struct sockaddr*)&client_addr, &client_len);

        // Recebe requisição do cliente
        recv(client_socket, buffer, BUFFER_SIZE - 1, 0);

        // Exibe requisição para debug
        printf("Requisição recebida:\n%s\n", buffer);

        // Tenta abrir o arquivo index.html
        FILE* file = fopen("html/index.html", "r");

        if (file) {
            // Envia cabeçalho HTTP 200 OK
            const char* header = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n";
            send(client_socket, header, strlen(header), 0);

            // Envia conteúdo do arquivo em blocos
            char content[BUFFER_SIZE];
            int bytes;
            while ((bytes = fread(content, 1, BUFFER_SIZE, file)) > 0) {
                send(client_socket, content, bytes, 0);
            }

            fclose(file);
        } else {
            // Se não achar index.html, envia erro 404
            FILE* error_file = fopen("html/erro.html", "r");

            const char* not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n";
            send(client_socket, not_found, strlen(not_found), 0);

            if (error_file) {
                char content[BUFFER_SIZE];
                int bytes;
                while ((bytes = fread(content, 1, BUFFER_SIZE, error_file)) > 0) {
                    send(client_socket, content, bytes, 0);
                }
                fclose(error_file);
            }
        }

        // Fecha conexão com cliente
        closesocket(client_socket);
    }

    // Fecha socket do servidor (não alcançado aqui)
    closesocket(server_socket);

    // Finaliza Winsock
    WSACleanup();

    return 0;
}

#include <winsock2.h>   // Biblioteca Winsock para comunicação com sockets
#include <stdio.h>      // Para printf e outras funções básicas

#pragma comment(lib, "ws2_32.lib")  // Linka automaticamente com a biblioteca Winsock

#define SERVER "127.0.0.1"  // IP do servidor (localhost)
#define PORT 8080           // Porta usada pelo servidor

int main() {
    WSADATA wsa;                     // Estrutura para iniciar o Winsock
    SOCKET sock;                     // Socket do cliente
    struct sockaddr_in server;      // Estrutura com IP e porta do servidor
    char *mensagem, buffer[4096];   // Mensagem enviada e buffer de resposta
    int tamanho_resposta;

    // Inicializa a biblioteca Winsock
    WSAStartup(MAKEWORD(2, 2), &wsa);

    // Cria o socket TCP (SOCK_STREAM) usando IPv4
    sock = socket(AF_INET, SOCK_STREAM, 0);

    // Define os dados do servidor de destino
    server.sin_addr.s_addr = inet_addr(SERVER); // Converte o IP para o formato correto
    server.sin_family = AF_INET;                // IPv4
    server.sin_port = htons(PORT);              // Porta do servidor

    // Conecta ao servidor
    connect(sock, (struct sockaddr*)&server, sizeof(server));

    // Envia uma requisição HTTP do tipo GET
    mensagem = "GET / HTTP/1.1\r\nHost: localhost\r\n\r\n";
    send(sock, mensagem, strlen(mensagem), 0);

    // Recebe a resposta do servidor
    tamanho_resposta = recv(sock, buffer, sizeof(buffer) - 1, 0);
    buffer[tamanho_resposta] = '\0'; // Adiciona o caractere nulo para encerrar string

    // Mostra a resposta no terminal
    printf("Resposta do servidor:\n%s\n", buffer);

    // Fecha o socket
    closesocket(sock);

    // Finaliza o uso do Winsock
    WSACleanup();

    return 0;
}

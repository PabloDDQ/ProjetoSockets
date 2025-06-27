Projeto da disciplina de Redes de Computadores do curso de Bacharelado em Ciência da Computação do Instituto Federal do Paraná (IFPR), desenvolvido pelos alunos Pablo Duarte de Quadros e Felipe Bertoluci Wendt.

Objetivo do projeto: desenvolver um código em linguagem C que simule a comunicação entre um cliente e um servidor por meio de sockets.
O cliente envia uma requisição HTTP ao servidor e:

Se o recurso solicitado existir, o servidor responde com uma página HTML contendo a mensagem "200 OK".

Caso contrário, o servidor responde com uma página HTML indicando "404 Not Found".

Hierarquia de Pastas

servidor-http/
├── build/                  ← Onde ficam os executáveis compilados (.exe)
│   ├── servidor.exe
│   └── cliente.exe
├── html/                   ← Páginas HTML de resposta
│   ├── index.html          ← Página de sucesso (200 OK)
│   └── erro.html           ← Página de erro (404 Not Found)
├── src/                    ← Códigos-fonte do projeto
│   ├── servidor.c
│   └── cliente.c
├── Makefile                ← Script de compilação
└── README.md               ← Arquivo com explicações do projeto



Forma de compilação do código:
- Gere um terminal integrado na pasta servidor-http
- No terminal coloque o comando "make"
- No terminal coloque o comando ".\build\servidor.exe"
- Abra um novo terminal integrado no + canto superior direito
- Depois no terminal coloque  "cd caminho\para\a\pasta\servidor-http" Exemplo que eu utilizo = "cd "C:\Users\pablo\Desktop\Projeto Sockets - Redes de Computadores\servidor-http" 
- Depois coloque o comando ".\build\cliente.exe"

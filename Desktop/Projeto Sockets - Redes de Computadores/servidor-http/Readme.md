Projeto da disciplina de Redes de Computadores do curso de Bacharelado em Ciência da Computação do Instituto Federal do Paraná (IFPR), desenvolvido pelos alunos Pablo Duarte de Quadros e Felipe Bertoluci Wendt.

Objetivo do projeto: desenvolver um código em linguagem C que simule a comunicação entre um cliente e um servidor por meio de sockets.
O cliente envia uma requisição HTTP ao servidor e:

Se o recurso solicitado existir, o servidor responde com uma página HTML contendo a mensagem "200 OK".

Caso contrário, o servidor responde com uma página HTML indicando "404 Not Found".

Forma de compilação do código:
- Gere um terminal integrado na pasta servidor-http
- No terminal coloque o comando "make"
- No terminal coloque o comando "./build/servidor.exe"
- Depois no navegador coloque "http://localhost:8080/"
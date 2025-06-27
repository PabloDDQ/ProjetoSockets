#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string texto;
    cout << "Digite um texto: ";
    getline(cin, texto);

    // Contadores
    int contadorPalavras = 0;
    int contadorCaracteres = 0;

    // Stringstream para separar palavras
    stringstream ss(texto);
    string palavra;

    // Conta as palavras e caracteres
    while (ss >> palavra) {
        contadorPalavras++;
        contadorCaracteres += palavra.length();
    }

    cout << "Número de palavras: " << contadorPalavras << endl;
    cout << "Número de caracteres (sem contar espaços): " << contadorCaracteres << endl;

    return 0;
}

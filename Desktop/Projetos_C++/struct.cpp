#include <iostream>
using namespace std;

struct carro {
    string nome;
    string cor;

    void insere(string stnome, string stcor) {
        nome = stnome;
        cor = stcor;
    }

    void mostra() {
        cout << "Carro: " << nome << endl;
        cout << "Cor: " << cor << endl;
    }
};

int main() {
    carro carros[3];

    carros[0].insere("Estrelinha", "Azul");
    carros[1].insere("Forno-Microondas", "Preto");
    carros[2].insere("Malvadeza", "Roxo");

    for (int i = 0; i < 3; i++) {
        carros[i].mostra();
    }
    
    return 0;
}

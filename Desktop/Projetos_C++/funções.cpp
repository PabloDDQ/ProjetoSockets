#include <iostream>
using namespace std;

int main() {
    int valor1, valor2;

    while (true) {
        cin >> valor1 >> valor2;

        if (valor1 <= 0 || valor2 <= 0) {
            break;
        }

        // Ordena os valores
        int valorMenor, valorMaior;
        if (valor1 < valor2) {
            valorMenor = valor1;
            valorMaior = valor2;
        } else {
            valorMenor = valor2;
            valorMaior = valor1;
        }

        int soma = 0;
        for (int i = valorMenor; i <= valorMaior; ++i) {
            cout << i << " ";
            soma += i;
        }
        cout <<"Sum=" << soma << endl;
    }

    return 0;
}
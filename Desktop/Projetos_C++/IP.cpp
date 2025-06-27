#include <iostream>
using namespace std;

int main() {
    int x, y, contador;

    // Lê os valores X e Y
    cin >> x >> y;

    for (int i = 1; i <= y; i++) {
        cout << i << " ";
        contador++;

        // Se o contador chegar a X, pula para a próxima linha
        if (contador == x) {
            cout << endl;
            contador = 0; // Reinicia o contador
        }
    }

    return 0;
}
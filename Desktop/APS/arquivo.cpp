#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n; // número de equações e incógnitas

    double A[10][11]; // matriz aumentada (m x (n+1)) - exemplo para até 10 equações
                      // Ajuste os tamanhos conforme necessário

    // leitura da matriz aumentada
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= n; j++) {
            cin >> A[i][j];
        }
    }

    // Eliminação com pivoteamento parcial
    for (int k = 0; k < n; k++) {
        // pivoteamento parcial: encontrar linha com maior valor absoluto na coluna k
        int maxIndex = k;
        double maxValue = fabs(A[k][k]);
        for (int i = k + 1; i < m; i++) {
            if (fabs(A[i][k]) > maxValue) {
                maxValue = fabs(A[i][k]);
                maxIndex = i;
            }
        }
        // troca linhas se necessário
        if (maxIndex != k) {
            for (int j = 0; j <= n; j++) {
                swap(A[k][j], A[maxIndex][j]);
            }
        }

        // eliminar abaixo do pivô
        for (int i = k + 1; i < m; i++) {
            double mlt = A[i][k] / A[k][k];
            for (int j = k; j <= n; j++) {
                A[i][j] -= mlt * A[k][j];
            }
        }
    }

    // Retrosubstituição para encontrar soluções
    double x[10];
    for (int i = n - 1; i >= 0; i--) {
        double soma = 0;
        for (int j = i + 1; j < n; j++) {
            soma += A[i][j] * x[j];
        }
        x[i] = (A[i][n] - soma) / A[i][i];
    }

    // Imprime solução conforme o formato pedido
    cout << n << endl;  // número de variáveis
    for (int i = 0; i < n; i++) {
        cout << x[i] << endl;
    }

    return 0;
}

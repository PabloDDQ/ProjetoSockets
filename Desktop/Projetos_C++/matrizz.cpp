#include <iostream>
using namespace std;

int main() {
    int vetor[4];

    for (int i = 3; i >= 0; i--) {
        cin >> vetor[i];
    }

    for (int i = 0; i < 4; i++) {
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }

    return 0;
}
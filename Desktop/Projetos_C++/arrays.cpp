#include <iostream>
using namespace std;

int main() {
    int pontoX, pontoY;
    cin >> pontoX >> pontoY;

    while (pontoX != 0 && pontoY != 0) {
        if (pontoX > 0 && pontoY > 0) {
            cout << "primeiro" << endl;
        } else if (pontoX < 0 && pontoY > 0) {
            cout << "segundo" << endl;
        } else if (pontoX < 0 && pontoY < 0) {
            cout << "terceiro" << endl;
        } else if (pontoX > 0 && pontoY < 0) {
            cout << "quarto" << endl;
        }

        cin >> pontoX >> pontoY;
    }

    return 0;
}

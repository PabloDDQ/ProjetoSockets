#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> produtos;
    int tam = 10;
    list<int>::iterator it;

    for (int i = 0; i < tam; i++) {
        produtos.push_front(i);
    }

    it = produtos.begin();
    advance(it, 5);
    produtos.insert(it, 0);

    cout << "Tamanho da lista: " << produtos.size() << endl;

    for (it = produtos.begin(); it != produtos.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}

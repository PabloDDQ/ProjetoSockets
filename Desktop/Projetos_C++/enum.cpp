#include <iostream>
using namespace std;
int main(){
    enum armas{fuzil, revolver, rifle, minigum};

    armas armasselecionadas;

    armasselecionadas = fuzil;
    cout<< armasselecionadas;
    return 0;
}
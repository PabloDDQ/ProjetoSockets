#include <iostream>

using namespace std;

//--------------Função 1----------------------
void inscrever(int vezes = 1){
    for (int i = 0; i < vezes; i++){
        cout<<"Hello World"<<endl;
    }
}
//--------------------------------------------

//--------------Função 2----------------------
void soma(int valor1, int valor2){
    cout<<"A soma de "<<valor1<<" com "<<valor2<<" resulta em: "<<valor1 + valor2<<endl;
}
//--------------------------------------------


int main(){
    inscrever();
    soma(10, 5);
    return 0;
}

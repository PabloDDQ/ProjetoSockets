#include <iostream>
#include <stack>
using namespace std;
int main(){

    stack <string> produtos_higiene_bucal;

    produtos_higiene_bucal.push("escova de dentes");
    produtos_higiene_bucal.push("pasta de dente");
    produtos_higiene_bucal.push("fio dental");
    produtos_higiene_bucal.push("Enxaguante bucal");

    cout<<"Tamanho da pilha: "<< produtos_higiene_bucal.size()<<endl;

    cout<<produtos_higiene_bucal.top()<<endl;
    //produtos_higiene_bucal.pop();
    //cout<<"Tamanho da pilha: "<< produtos_higiene_bucal.size()<<endl;


    return 0;
}
#include <iostream>
using namespace std;
int main (){
    int tam = 5;
    int vetor[tam];
    int contador;
    //vetor[]= ;
    vetor[0]= 10;
    vetor[1]= 20;
    vetor[2]= 30;
    vetor[3]= 40;
    vetor[4]= 50;
    for (contador= 0;contador < tam; contador++){
        cout << vetor[contador] <<endl;
    }
    
    return 0;
}
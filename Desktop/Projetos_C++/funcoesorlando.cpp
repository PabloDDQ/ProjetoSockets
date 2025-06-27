/*
#include <iostream>
using namespace std;
double media(double num1, double num2, double num3){
    double conta1 = num1 + num2 + num3;
    double conta2 = conta1/3;      // Questão 01
     return conta2;
    
}
int main() {
    cout << media(7, 7, 3) << endl;
    return 0;

}
*/

/*
#include <iostream>
using namespace std;
int maiorNumero(int num1, int num2, int num3){
    int maior = num1;
    if (num2 > maior){
        maior = num2;
    }
    if (num3 > maior){   // Questão 02
        maior = num3;
    }
    return maior;
}
int main() {
    cout<<maiorNumero(99, -6, 0)<<endl;
    return 0;

}
*/

/*
#include <iostream>
using namespace std;
bool ehPar(int num){
    if (num % 2 == 0)
    {
        return true; //Questão 04
    }
    else
    {
        return false;
    }
}
int main() {
    cout<<ehPar(7)<<endl;

    return 0;

}
*/

/*
#include <iostream>
using namespace std;
int fatorial(int numero){
    int resultado = 1;   //Questão 05
    for (int i = numero; i >= 1; i--) {
        resultado *= i;
    }
    return resultado;
}
int main() {
    cout<<fatorial(4)<<endl;
    return 0;
}
*/
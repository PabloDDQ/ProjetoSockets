#include <iostream>
using namespace std;
int main(){
    int senha_certa = 8566;
    int senha_digitada;
    while (true){
        cout<<"Digite os 4 (Quatro) digitos do cartao: ";
        cin >> senha_digitada;
        if (senha_digitada == senha_certa){
            cout<<"Acesso liberado!"<<endl;
            break;
        }
        else{
            cout<<"Senha incorreta. Tente novamente." <<endl;
        }  
    }
    return 0;
}

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
void mensagem_base(){
    cout<<"Voce esta em uma sala escura. A luz da lua raia pela janela."<<endl<<"Ha OURO no canto da sala, junto com uma PA e uma CORDA"<<endl;

}
void pular_tela(){
    system("cls");
}
void caminhar_sul1(){
    cout<<"Pegue sua recompensa"<<endl;
    cout<<"A LUA PALIDA SORRI PARA VOCE."<<endl;
    cout<<"Voce esta em uma floresta. Existem caminhos para o SUL, OESTE e NORTE."<<endl<<"Comando?"<<endl;
    string direS1 = "SUL";
    string direS1_dig;
    while (true) {
        getline(cin, direS1_dig);
        if (direS1_dig == direS1) {
            cout << "..." << endl;
            break;
        } else {
            cout << "Resposta errada. Tente novamente." << endl;
        }
    }
    
}

void caminhar_leste1(){
    cout<<"Pegue sua recompensa"<<endl;
    cout<<"A LUA PALIDA SORRI PARA VOCE."<<endl;
    cout<<"Voce esta em uma floresta. Existem caminhos para o SUL, LESTE e NORTE."<<endl<<"Comando?"<<endl;
    string direL1 = "LESTE";
    string direL1_dig;
    while (true) {
        getline(cin, direL1_dig);
        if (direL1_dig == direL1) {
            cout << "..." << endl;
            break;
        } else {
            cout << "Resposta errada. Tente novamente." << endl;
        }
    }
}
void caminhar_norte1(){
    cout<<"Pegue sua recompensa"<<endl;
    cout<<"A LUA PALIDA SORRI PARA VOCE."<<endl;
    cout<<"Voce esta em uma floresta. Existem caminhos para o SUL, LESTE e NORTE."<<endl<<"Comando?"<<endl;
    string direN1 = "NORTE";
    string direN1_dig;
    while (true) {
        getline(cin, direN1_dig);
        if (direN1_dig == direN1) {
            cout << "..." << endl;
            break;
        } else {
            cout << "Resposta errada. Tente novamente." << endl;
        }
    }
}
void caminhar_norte2(){
    cout<<"Pegue sua recompensa"<<endl;
    cout<<"A LUA PALIDA SORRI PARA VOCE."<<endl;
    cout<<"Voce esta em uma floresta. Existem caminhos para o OESTE, LESTE e NORTE."<<endl<<"Comando?"<<endl;
    string direN2 = "NORTE";
    string direN2_dig;
    while (true) {
        getline(cin, direN2_dig);
        if (direN2_dig == direN2) {
            cout << "..." << endl;
            break;
        } else {
            cout << "Resposta errada. Tente novamente." << endl;
        }
    }
}
void caminhar_leste2(){
    cout<<"Pegue sua recompensa"<<endl;
    cout<<"A LUA PALIDA SORRI PARA VOCE."<<endl;
    cout<<"Voce esta em uma floresta. Existem caminhos para o OESTE, LESTE e NORTE."<<endl<<"Comando?"<<endl;
    string direL2 = "LESTE";
    string direL2_dig;
    while (true) {
        getline(cin, direL2_dig);
        if (direL2_dig == direL2) {
            cout << "..." << endl;
            break;
        } else {
            cout << "Resposta errada. Tente novamente." << endl;
        }
    }
}
void caminhar_oeste1(){
    cout<<"Pegue sua recompensa"<<endl;
    cout<<"A LUA PALIDA SORRI PARA VOCE."<<endl;
    cout<<"Voce esta em uma floresta. Existem caminhos para o OESTE, LESTE e SUL."<<endl<<"Comando?"<<endl;
    string direO1 = "OESTE";
    string direO1_dig;
    while (true) {
        getline(cin, direO1_dig);
        if (direO1_dig == direO1) {
            cout << "..." << endl;
            break;
        } else {
            cout << "Resposta errada. Tente novamente." << endl;
        }
    }
}
int main() {
    string qualquer;
    cout << "Pale Luna (Lua Palida)" << endl;
    cout << "Clique em qualquer tecla para iniciar: ";
    cin >> qualquer;
    pular_tela();

    cout << "Dicas do Desenvolvedor: "<< endl <<"- Digite tudo em letra MAIUSCULA e sem acentos."<<endl<<"- Os pequenos sinais sao importantes e as ordens importam."<<endl<<"- Ao final existe uma recompensa."<<endl;
    cout <<"Digite qualquer tecla: ";
    cin >> qualquer;
    pular_tela();

    mensagem_base();
    cout << "Tem uma PORTA no LESTE."<<endl;
    cout <<"Comando ?"<<endl;
    cout <<"Voce ve uma PORTA aqui."<<endl;
    
    string comando_certo = "PEGAR OURO";
    string comando_digitado;
    while (true) {
        getline(cin, comando_digitado);
        if (comando_digitado == comando_certo) {
            cout << "Pegou." << endl;
            break;
        } else {
            cout << "Resposta errada. Tente novamente." << endl;
        }
    }

    string comando_certo2 = "PEGAR PA";
    string comando_digitado2;
    while (true) {
        getline(cin, comando_digitado2);
        if (comando_digitado2 == comando_certo2) {
            cout << "Pegou." << endl;
            break;
        } else {
            cout << "Resposta errada. Tente novamente." << endl;
        }
    }

    string comando_certo3 = "PEGAR CORDA";
    string comando_digitado3;
    while (true) {
        getline(cin, comando_digitado3);
        if (comando_digitado3 == comando_certo3) {
            cout << "Pegou." << endl;
            break;
        } else {
            cout << "Resposta errada. Tente novamente." << endl;
        }
    }
    string comando_porta_certo = "ABRIR PORTA";
    string comando_porta_digitado;
    while (true){
        getline(cin, comando_porta_digitado);
        if (comando_porta_digitado == comando_porta_certo){
            cout<<"Voce abriu a PORTA."<<endl;
            break;
        }
        else{
            cout<<"Resposta errada. Tente novamente."<<endl;
        }
        
    }
    string comando_leste = "LESTE";
    string comando_leste_digitado;
    while (true){
        getline(cin, comando_leste_digitado);
        if (comando_leste_digitado == comando_leste){
            cout<<"Pegue sua recompensa."<<endl;
            break;
        }
        else{
            cout<<"Resposta errada. Tente novamente."<<endl;
        }
        
    }
    caminhar_sul1();
    caminhar_leste1();
    caminhar_norte1();
    caminhar_norte2();
    caminhar_leste2();
    caminhar_norte1();
    caminhar_oeste1();
    caminhar_norte2();
    caminhar_leste2();
    caminhar_sul1();
    caminhar_leste1();
    caminhar_sul1();
    cout<<"A LUA PALIDA SORRI LARGAMENTE."<<endl<<"Nao ha caminhos."<<endl<<"A LUA PALIDA SORRI LARGAMENTE."<<"O chao esta macio."<<endl<<"A LUA PALIDA SORRI LARGAMENTE."<<endl<<"Aqui."<<endl;
    string buraco_certo = "CAVAR BURACO";
    string buraco_dig;
    while (true) {
        getline(cin, buraco_dig);
        if (buraco_dig == buraco_certo) {
            cout << "Voce cavou um buraco" << endl;
            break;
        } else {
            cout << "Resposta errada. Tente novamente." << endl;
        }
    }
    string ouro_certo = "LARGAR OURO";
    string ouro_dig;
    while (true) {
        getline(cin, ouro_dig);
        if (ouro_dig == ouro_certo) {
            cout << "Voce largou o ouro no buraco." << endl;
            break;
        } else {
            cout << "Resposta errada. Tente novamente." << endl;
        }
    }
    string buraco2_certo = "TAPAR BURACO";
    string buraco2_dig;
    while (true) {
        getline(cin, buraco2_dig);
        if (buraco2_dig == buraco2_certo) {
            cout << "." << endl;
            break;
        } else {
            cout << "Resposta errada. Tente novamente." << endl;
        }
    }
    pular_tela();
    cout<<"Parabens"<<endl<<" -25.423772"<<endl<<" -49.162466"<<endl<<"CRIADOR: PABLO DUARTE DE QUADROS"<<endl;
    return 0;
}
#include <iostream>
#include "cEleicao.h"
#include <iomanip>
using namespace std;

cEleicao::cEleicao() {
}

cEleicao::cEleicao(const cEleicao& orig) {
}

cEleicao::~cEleicao() {
}

void cEleicao::menu(){
    int votos;
    float can1 = 0, can2 = 0, can3 = 0, can4 = 0, nulo = 0, branco = 0, qtdVotos = 0;
    
    cout << "Sistema de Eleicao." << endl;
    
    do {
        cout << "Digite [1] para votar no candidato 1." << endl;
        cout << "Digite [2] para votar no candidato 2." << endl;
        cout << "Digite [3] para votar no candidato 3." << endl;
        cout << "Digite [4] para votar no candidato 4." << endl;
        cout << "Digite [0] para votar em NULO." << endl;
        cout << "Digite [6] para votar em BRANCO." << endl;
        cout << "Digite [-1] para sair e mostrar o resultado." << endl;
        cout << "Insira seu voto: ";
        
        cin >> votos;
        
        switch (votos) {
            case 1:
                can1++;
                qtdVotos++;
                break;
            case 2:
                can2++;
                qtdVotos++;
                break;
            case 3:
                can3++;
                qtdVotos++;
                break;
            case 4:
                can4++;
                qtdVotos++;
                break;
            case 0:
                nulo++;
                qtdVotos++;
                break;
            case 6:
                branco++;
                qtdVotos++;                
                break;
            case -1:
                cout << endl;
                break;
            default:
                cout << "Opcao Invalida!" << endl;
                break;
        }
        
    } while (votos != -1);

    imprimir(can1, can2, can3, can4, nulo, qtdVotos, branco);
}

void cEleicao::imprimir(float c1, float c2, float c3, float c4, float n, float qtd, float b){
    cout << "O total de votos foi: " << qtd << endl << endl;    
    
    if (c1 >= c2 && c1 >= c3 && c1 >= c4)
        cout << "O candidato 1 foi o vencedor com: " << c1 << " votos, e seu percentual foi de: "
             << setprecision(2) << (c1 / qtd) * 100 << "%" << endl << endl;
    else if (c2 >= c1 && c2 >= c3 && c2 >= c4)
        cout << "O candidato 2 foi o vencedor com: " << c2 << " votos, e seu percentual foi de: "
             << setprecision(2) << (c2 / qtd) * 100 << "%" << endl << endl;
    else if (c3 >= c1 && c3 >= c2 && c3 >= c4)
        cout << "O candidato 3 foi o vencedor com: " << c3 << " votos, e seu percentual foi de: "
             << setprecision(2) << (c3 / qtd) * 100 << "%" << endl << endl;
    else 
        cout << "O candidato 4 foi o vencedor com: " << c4 << " votos, e seu percentual foi de: "
             << setprecision(2) << (c4 / qtd) * 100 << "%" << endl << endl;
    
    cout << "A distribuição de votos foi: " << endl;
    cout << "Candidato 1: " << c1 << " votos e seu percentual foi de: " << setprecision(2) << (c1 / qtd) * 100 << "%" << endl;
    cout << "Candidato 2: " << c2 << " votos e seu percentual foi de: " << setprecision(2) << (c2 / qtd) * 100 << "%" << endl;
    cout << "Candidato 3: " << c3 << " votos e seu percentual foi de: " << setprecision(2) << (c3 / qtd) * 100 << "%" << endl;
    cout << "Candidato 4: " << c4 << " votos e seu percentual foi de: " << setprecision(2) << (c4 / qtd) * 100 << "%" << endl;
    cout << "Votos em Branco: " << b << " votos e seu percentual foi de: " << setprecision(2) << (b / qtd) * 100 << "%" << endl;
    cout << "Votos Nulos: " << n << " votos e seu percentual foi de: " << setprecision(2) << (n / qtd) * 100 << "%" << endl;
}
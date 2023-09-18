#include <iostream>
#include "cTriangulo.h"
#include <string>
using namespace std;

cTriangulo::cTriangulo() {
}

cTriangulo::cTriangulo(const cTriangulo& orig) {
}

cTriangulo::~cTriangulo() {
}

void cTriangulo::insert(){
    
    int x,y,z;
    
    cout << "Algoritmo que verifica se um triangulo pode ser formado." << endl;
    cout << "Digite o valor de X: ";
    cin >> x;
    cout << "Digite o valor de Y: ";
    cin >> y;
    cout << "Digite o valor de Z: ";
    cin >> z;
    
    cout << this->classifica(x,y,z);
}

//o comprimento de cada lado de um triângulo é menor do que a soma do comprimento
//dos outros dois lados

string cTriangulo::classifica(int x, int y, int z){
    
    if((x < y + z) && (y < x + z) && (z < x + y)){
        if(x == y && y == z)
            return "O triangulo e Equilatero, uma vez que os tres comprimentos sao iguais.";
        else if(x == y || x == z)   
            return "O triangulo e Isoceles, uma vez que o comprimento de dois lados sao iguais.";
        else
            return "O triangulo e Escaleno, uma vez que nenhum comprimento de seus lados sao iguais.";  
    }else
        return "Os valores nao podem formar um triangulo.";
}
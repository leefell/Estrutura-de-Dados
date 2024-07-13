#include <iostream>
#include <locale>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct Aresta
{
    int origem;
    int destino;
    float peso;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int orig, dest, numNos, noInicial, ehDigr, ehPond;
    float peso;

    ifstream arqE("dadosGrafo.txt");

    if (!arqE.is_open())
    {
        cout << "Arquivo dadosGrafo.txt não pode ser aberto" << endl;
        abort();
    }

    arqE >> numNos >> noInicial >> ehDigr >> ehPond;
    cout << "Dados do arquivo:" << endl;
    cout << "Número de Nós: " << numNos << endl;
    cout << "Nó Inicial: " << noInicial << endl;
    cout << "Grafo Dígrafo: " << ehDigr << endl;
    cout << "Grafo Ponderado: " << ehPond << endl;

    // Usando alocação dinâmica de memória para um array de ponteiros para Aresta
    Aresta **arestas = new Aresta *[numNos * numNos]; // Número máximo de arestas possíveis
    int count = 0;

    while (arqE >> orig >> dest >> peso)
    {
        arestas[count] = new Aresta{orig, dest, peso};
        cout << "Aresta: " << orig << " - " << dest << ", peso: " << peso << ";" << endl;
        count++;
    }

    arqE.close();

    ofstream arqR("resultado.txt");

    if (!arqR.is_open())
    {
        cout << "Arquivo resultado.txt não pode ser criado" << endl;
        abort();
    }

    arqR << "Número de Nós: " << numNos << endl;
    arqR << "Nó Inicial: " << noInicial << endl;
    arqR << "Grafo Dígrafo: " << ehDigr << endl;
    arqR << "Grafo Ponderado: " << ehPond << endl;
    arqR << "Arestas:" << endl;

    for (int i = 0; i < count; ++i)
    {
        arqR << "Origem: " << arestas[i]->origem << ", Destino: " << arestas[i]->destino << ", Peso: " << arestas[i]->peso << endl;
    }

    // Liberando a memória alocada para as arestas
    for (int i = 0; i < count; ++i)
    {
        delete arestas[i];
    }
    delete[] arestas;

    arqR.close();

    return 0;
}

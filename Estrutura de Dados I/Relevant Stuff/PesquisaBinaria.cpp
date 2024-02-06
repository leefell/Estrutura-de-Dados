int PesquisaBinaria(int K[], int chave, int n){
    int inf, sup, meio;
    inf = 0;
    sup = n - 1;
    while(inf <= sup){
        meio = (inf + sup)/2;
        if(chave == K[meio].cpf){
            return meio
        }else if(chave < K[meio].cpf){
            sup = meio - 1;
        }else{
            inf = meio + 1;
        }
        return -1 /*não encontrar*/
    }
}

// Exemplo Prático

void cCadastro::pesquisaBinaria(int qtd, sPessoa *vetor, string indice){
    
    int inf, sup, meio;
    inf = 0;
    sup = qtd - 1;
    while(inf <= sup){
        meio = (inf + sup)/2;
        if(indice == vetor[meio].cpf){
            cout << "O nome registrado a esse CPF e: " << vetor[meio].nome << endl;
            return;
        }else if(indice < vetor[meio].cpf){
            sup = meio - 1;
        }else{
            inf = meio + 1;
        }
    }
    cout << "CPF nao encontrado. " << endl;
}

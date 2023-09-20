int PesquisaBinaria(int K[], int chave, int n){
    int inf, sup, meio;
    inf = 0;
    sup = n - 1;
    while(inf <= sup){
        meio = (inf + sup)/2;
        if(chave == K[meio]){
            return meio
        }else if(chave < K[meio]){
            sup = meio - 1;
        }else{
            inf = meio + 1;
        }
        return -1 /*não encontrar*/
    }
}
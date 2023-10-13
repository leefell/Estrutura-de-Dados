void bubbleSort(Struct *array, int qtd){
    
    Struct temp; // temporario
    for(int i = qtd - 1; i >= 1; i--){
        for(int j = 0; j < i; j++){
            if(vetor[j].nome > vetor[j+1].nome){
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }   
}

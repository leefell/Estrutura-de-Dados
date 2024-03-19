 #include <iostream>
using namespace std;

// Para transformar uma subárvore com raiz no nó i, que é um índice em arr[]. n é o tamanho do heap
void heapify(int arr[], int n, int i)
{
	int maior = i; // Inicializa o maior como raiz, já que estamos usando indexação baseada em 0
	int esquerda = 2 * i + 1; // esquerda = 2*i + 1
	int direita = 2 * i + 2; // direita = 2*i + 2

	// Se o filho esquerdo for maior que a raiz
	if (esquerda < n && arr[esquerda] > arr[maior])
		maior = esquerda;

	// Se o filho direito for maior que o maior até agora
	if (direita < n && arr[direita] > arr[maior])
		maior = direita;

	// Se o maior não for a raiz
	if (maior != i) {
		swap(arr[i], arr[maior]);

		// Recursivamente transforma em heap a subárvore afetada
		heapify(arr, n, maior);
	}
}

// Função principal para fazer a ordenação por heap
void heapSort(int arr[], int n)
{
	// Constrói o heap (rearranja o array)
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	// Extrai um por um os elementos do heap
	for (int i = n - 1; i >= 0; i--) {
		// Move a raiz atual para o final
		swap(arr[0], arr[i]);

		// Chama a função heapify no heap reduzido
		heapify(arr, i, 0);
	}
}

/* Função utilitária para imprimir array de tamanho n */
void imprimirArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

// Programa principal
int main()
{
	int arr[] = { 60 ,20 ,40 ,70, 30, 10};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Algoritmo de construção do heap
	// O loop deve ser reverso, você irá entender após analisar manualmente
	// (i=n/2 -1) porque outros nós/elementos são nós folha
	// (i=n/2 -1) para indexação baseada em 0
	// (i=n/2) para indexação baseada em 1
	for(int i=n/2 -1;i>=0;i--){
		heapify(arr,n,i);
	}

	cout << "Após transformar em heap, o array é: \n";
	imprimirArray(arr, n);

	// Chamando a função de ordenação por heap
	heapSort(arr, n);

	cout << "O array ordenado é: \n";
	imprimirArray(arr, n);
	
	return 0;
}
// Código por Prajwal Chougale
// source do codigo: https://www.geeksforgeeks.org/cpp-program-for-heap-sort/
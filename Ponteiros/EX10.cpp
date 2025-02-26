/*
10) Implemente uma fun��o que copie um vetor para um novo vetor alocado dinamicamente. O tamanho e o conte�do do vetor original devem ser preservados. 
A fun��o deve seguir o prot�tipo: int *copiaVetor(int *vet, int n);
*/

#include <stdio.h>
#include <stdlib.h>

int *copiaVetor(int *vet, int n);

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int *novoVetor = copiaVetor(vetor, tamanho);

    if (novoVetor != NULL)
	{
        printf("Novo vetor copiado:\n");
        
        for (int i = 0; i < tamanho; i++)
		{
            printf("%d ", novoVetor[i]);
        }
        printf("\n");
    }

    return 0;
}

int *copiaVetor(int *vet, int n)
{
    int *novoVetor = (int *)malloc(n * sizeof(int));

    if (novoVetor == NULL)
	{
        printf("Erro de aloca��o de mem�ria.\n");
        return NULL;
    }

    for (int i = 0; i < n; i++)
        *(novoVetor + i) = *(vet + i);

    return novoVetor;
}

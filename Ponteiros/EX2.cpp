/*
2) Desenvolva uma fun��o para calcular a soma dos elementos de um vetor. O vetor
de inteiros e seu tamanho s�o passados como par�metros, e a fun��o retorna a soma
de seus valores. Utilize o seguinte prot�tipo: int somaVetor(int *vet, int n);
*/
#include <stdio.h>

int somaVetor(int *vet, int n);
main()
{
	int vetor[5] = {1, 2, 3, 4, 5};
	
	int soma = somaVetor(vetor, 5);
	printf("%d",soma);
}

int somaVetor(int *vet, int n)
{
	int soma;
	int i;
	for(i = 0; i < n; i++)
	{
		soma += vet[i];
	}
	return soma;
}

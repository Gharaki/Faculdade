/*
5) Elabore uma função que aloque dinamicamente um vetor de inteiros e o inicialize com um valor específico.
 A função recebe o tamanho do vetor e o valor de inicialização e retorna um ponteiro para o vetor criado. 
O protótipo a seguir deve ser utilizado: int *alocaVetor(int n, int valor);
*/

#include <stdio.h>
#include <stdlib.h>

int *alocaVetor(int n, int valor);

main()
{
	int tam;
	int valorInicial;
	int *vetor;
	int i;
	
	tam = 5;
	valorInicial = 10;
	vetor = alocaVetor(tam, valorInicial);
	
	for(i = 0; i < tam; i++)
	printf("%d",*(vetor + i));
	
	free(vetor);
}

int *alocaVetor(int n, int valor)
{
	int *vetor = (int *)malloc(n * sizeof(int));
	
	if(vetor == NULL)
	{
		printf("Erro ao alocar memória!");
		return NULL;
	}
}

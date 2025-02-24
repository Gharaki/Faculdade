/*
4) Crie uma função capaz de encontrar o menor valor em um vetor de inteiros. 
A função recebe um vetor e seu tamanho como entrada e retorna o menor número encontrado. 
Utilize este protótipo: int menorElemento(int *vet, int n);
*/

#include <stdio.h>

int menorElemento(int *vet, int n);
main()
{
	int vetor[10] = {92, 22, 63, 19, 90, 98, 29, 17, 75, 78};
	int menor;
	
	menor = menorElemento(vetor, 10);
	printf("%d", menor);
}

int menorElemento(int *vet, int n)
{
	int i;
	int menor;
	
	menor = *vet;
	
	for(i = 0; i < n; i++)
	{
		if(*(vet + i) < menor)
			menor = *(vet + i);
	}
	return menor;
}

/*
9) Desenvolva uma fun��o que localize a primeira ocorr�ncia de um n�mero em um vetor. 
Caso o n�mero esteja presente, a fun��o retorna o �ndice correspondente; caso contr�rio, retorna em -1. O prot�tipo correto �: int buscaNumero(int *vet, int n, int num);
*/

#include <stdio.h>
#include <locale.h>

int buscaNumero(int *vet, int n, int num);

main()
{
	setlocale(LC_ALL,"Portuguese");
    int vetor[] = {3, 8, 2, 10, 5, 2};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int numero = 2;

    int indice = buscaNumero(vetor, tamanho, numero);

    if (indice != -1)
        printf("N�mero %d encontrado no �ndice %d.\n", numero, indice);
    else
        printf("N�mero %d n�o encontrado no vetor.\n", numero);
}

int buscaNumero(int *vet, int n, int num)
{
    for (int i = 0; i < n; i++)
	{
        if (*(vet + i) == num)
            return i;
    }
    return -1;
}

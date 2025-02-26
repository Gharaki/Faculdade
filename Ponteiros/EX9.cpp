/*
9) Desenvolva uma função que localize a primeira ocorrência de um número em um vetor. 
Caso o número esteja presente, a função retorna o índice correspondente; caso contrário, retorna em -1. O protótipo correto é: int buscaNumero(int *vet, int n, int num);
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
        printf("Número %d encontrado no índice %d.\n", numero, indice);
    else
        printf("Número %d não encontrado no vetor.\n", numero);
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

/*
1) Crie uma função que troque os valores de dois inteiros entre si. Para isso, a função deve receber dois ponteiros para inteiros e realizar a troca diretamente na memória. 
O protótipo da função é: void troca(int *a, int *b);
*/
#include <stdio.h>

void troca(int *a, int *b);
main()
{
	int a = 32;
	int b = 10;
	
	printf("Antes da troca: a = %d, b = %d\n", a, b);
	troca(&a, &b);
	printf("Depois da troca: a = %d, b = %d\n", a, b);
}

void troca(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

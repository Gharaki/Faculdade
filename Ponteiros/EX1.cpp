/*
1) Crie uma fun��o que troque os valores de dois inteiros entre si. Para isso, a fun��o deve receber dois ponteiros para inteiros e realizar a troca diretamente na mem�ria. 
O prot�tipo da fun��o �: void troca(int *a, int *b);
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

/*
3) Implemente uma fun��o que copie uma string para outra. Usando ponteiros, a fun��o deve transferir o conte�do de uma string para outra.
 O prot�tipo a ser seguido �: void copiaString(char *dest, char *orig);
*/
#include <stdio.h>
#include <string.h> 
//string.h para poder utilizar strlen;
void copiaString(char *dest, char *orig);
main()
{
	char str1[] = "teste";
	char str2[10];
	
	copiaString(str1,str2);
	printf("string copiada = %s",str2);
}

void copiaString(char *str1, char *str2)
{
	int tamanho;
	int i;
	tamanho = strlen(str1);
	for(i = 0; i < tamanho; i++)
	{
		str2[i] = str1[i];
	}
}

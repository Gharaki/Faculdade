/*
7) Crie uma fun��o que conte quantas vogais existem em uma string. A fun��o recebe uma string e retorna o n�mero de caracteres que s�o vogais (a, e, i, o, u). O prot�tipo correto �: int contaVogais(char *str);
*/
#include <stdio.h>
#include <locale.h>


int contaVogais(char *str);
main()
{
	setlocale(LC_ALL, "Portuguese");
	int total;
    char texto[50];
	
	printf("Digite um texto, e mostrarei quantas vogais ter�: ");
	gets(texto);
    total = contaVogais(texto);

    printf("N�mero de vogais: %d", total);
}

int contaVogais(char *str)
{
    int count = 0;

    while (*str) {  // Percorre a string at� encontrar '\0'
        char c = *str;

        // Verifica se � vogal usando valores da tabela ASCII
        if ((c == 65 || c == 69 || c == 73 || c == 79 || c == 85) ||  // A, E, I, O, U
            (c == 97 || c == 101 || c == 105 || c == 111 || c == 117)) {  // a, e, i, o, u
            count++;
        }

        str++;  // Avan�a para o pr�ximo caractere
    }

    return count;
}


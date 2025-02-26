/*
8) Implemente uma função para concatenar duas strings. A segunda string deve ser anexada ao final da primeira. 
Utilize o seguinte protótipo: void concatenaString(char *dest, char *orig);
*/

#include <stdio.h>
#include <string.h>

void concatenaString(char *dest, char *orig);
main()
{
    char str1[50] = "Hello, ";
    char str2[] = "World!";

    concatenaString(str1, str2);

    printf("String concatenada: %s\n", str1);
}

void concatenaString(char *dest, char *orig)
{
    int lenDest = strlen(dest);
    strcpy(dest + lenDest, orig);
}


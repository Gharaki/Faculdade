/*
6) Desenvolva uma função para inverter a ordem dos elementos de um vetor. O vetor deve ser modificado diretamente, sem criar uma cópia auxiliar.
 A assinatura da função deve ser: void inverteVetor(int *vet, int n);
*/

#include <stdio.h>

void inverteVetor(int *vet, int n);

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Vetor antes de inverter:\n");
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    inverteVetor(vetor, tamanho);

    printf("Vetor depois de inverter:\n");
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}

void inverteVetor(int *vet, int n)
{
    int *inicio = vet;
    int *fim = vet + n - 1;

    while (inicio < fim)
	{
        *inicio = *inicio + *fim;  
        *fim = *inicio - *fim;     
        *inicio = *inicio - *fim;  

        inicio++;  
        fim--;     
    }
}

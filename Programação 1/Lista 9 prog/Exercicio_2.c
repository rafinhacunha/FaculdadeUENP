#include <stdio.h>
#include <stdlib.h>

int main(){
    int *notas, soma=0;
    int n;
    int notamaior5 = 0;
    float media = 0;
    int notamenor3 = 0;
    float porcentagem_3 = 0;
    printf("Quantidade de notas: ");
    scanf("%d", &n);
    notas = (int*) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &notas[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (notas[i] == 5)
    {
        notamaior5++;
    } 
    }
    printf("\nQuantidade de notas maior que 5: %d (satisfeito)", notamaior5);
    for (int i = 0; i < n; i++)
    {
        if (notas[i] > 3)
        {
            notamenor3++;
        }
    }
    porcentagem_3 = (notamenor3 * 100) / n;
    printf("\nPorcentagem de notas menor que 3: %.1f", porcentagem_3);
    for (int i = 0; i < n; i++)
    {
        soma += notas[i];
    }
    media = soma/n;
    printf("\nMedia de avaliacoes: %.1f", media);
    free(notas);
}
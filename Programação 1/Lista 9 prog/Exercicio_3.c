#include <stdio.h>
#include <stdlib.h>

int main(){
    int **matriz;
    int m, n, num;
    printf("Tamanho do vetor: ");
    scanf("%d", &num);
    int vet[num];
    printf("Informe a linha e a coluna: ");
    scanf("%d %d", &m, &n);
    matriz = (int**) calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++)
    {
        matriz[i] = (int*) calloc(n, sizeof(int));
    
    }
    printf("Matriz: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Posicao [%d] [%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Informe os valores do vetor: \n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &vet[i]);
    }
    int resultado[m];
    for (int i = 0; i < m; i++)
    {
        resultado[i]=0;
        for (int j = 0; j < n; j++)
        {
            resultado[i] += matriz[i][j] * vet[j];
        }
    }
    printf("Produto da matriz pelo vetor:\n");
    for (int i = 0; i < m; i++) {
        printf("%d\n", resultado[i]);
    }
    free(matriz);
}
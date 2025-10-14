#include <stdio.h>
#include <stdlib.h>

int main(){
    int **matriz;
    int n;
    printf("Alocacao da matriz: ");
    scanf("%d", &n);
    matriz = (int**)calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        matriz[i] = (int*)calloc(n,sizeof(int));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        
    }
    
    int *diagonal;
    diagonal = (int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                diagonal[i] = matriz[i][j];
            }
        }
    }
    printf("Vetor da diagonal: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", diagonal[i]);
    }
    free(matriz);
}
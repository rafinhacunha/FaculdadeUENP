#include <stdio.h>
    void lerMatriz(int matriz[3][5]){
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }
    }
    void imprimirMatriz(int matriz[3][5]){
        int i, j;
        printf("MATRIZ SEM A SOMA\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
            {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
    }
    void colunaSoma(int matriz[3][5], int soma[5]){
        int i, j;
        for (i = 0; i < 5; i++)
        {
            soma[i] = 0;
        }
        
        for (j = 0; j < 5; j++)
        {
            for (i = 0; i < 3; i++)
            {
                soma[j] += matriz[i][j];
            }
        }
    }
    void imprimirSoma(int soma[5]){
        int count=1;
        for (int i = 0; i < 5; i++)
        {
            printf("A soma da coluna %d: %d\n", count, soma[i]);
            count++;
        }
    }
    
int main(){
    int matriz[3][5];
    int soma[5];
    lerMatriz(matriz);
    imprimirMatriz(matriz);
    colunaSoma(matriz, soma);
    imprimirSoma(soma);
    return 0;
}
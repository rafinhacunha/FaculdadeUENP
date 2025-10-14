#include <stdio.h>

    void lerMatriz(int matriz[5][3]){
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("[%d] [%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
    }
     void somaMatriz(int matriz[5][3], int soma[5]){
        int i, j;
        for (i = 0; i < 5; i++)
        {
            soma[i]=0;
            for (j = 0; j < 3; j++)
            {
                soma[i] += matriz [i][j];
            }
        }
     }
    void imprimirSoma(int soma[5]){
        int i, count=1;
        for (i = 0; i < 5; i++)
        {
            printf("A soma da linha %d: %d\n", count, soma[i]);
            count++;
        }
        
    }

    int main(){
        int matriz[5][3];
        int soma[5];
        lerMatriz(matriz);
        somaMatriz(matriz, soma);
        imprimirSoma(soma);
        return 0;
    }

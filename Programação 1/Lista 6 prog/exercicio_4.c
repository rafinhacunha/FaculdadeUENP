#include <stdio.h>

int main(){
    int matriz[4][5];
    int i, j;
    int menor;
    printf("[0] [0]: ");
    scanf("%d", &matriz[0][0]);
    menor = matriz[0][0];
    for (i = 0; i <= 0; i++)
    {
        for (j = 1; j < 5; j++)
        {
            printf("[%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j]<menor)
            {
                menor = matriz[i][j];
            }
        }
    }
    for (i = 1; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("[%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("O MENOR VALOR DESSA MATRIZ EH: %d", menor);
}
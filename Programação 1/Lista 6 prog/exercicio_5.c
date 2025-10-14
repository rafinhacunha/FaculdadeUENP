#include <stdio.h>
int main(){
    int matriz[5][5];
    int i, j, count=0, diagonal[5];
    float soma, media;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("[%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == j)
            {
                diagonal[count] = matriz[i][j];
                count++;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 5; i++)
    {
        soma += diagonal[i];
    }
    media = (soma/5);
    printf("MEDIA DA DIAGONAL: %.1f", media);
}
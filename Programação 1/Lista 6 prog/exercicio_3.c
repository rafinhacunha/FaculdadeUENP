#include <stdio.h>

int main(){
    int matriz[5][3];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("MATRIZ: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    int multiplo_3[i];
    int count=0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] % 3 == 0)
            {
                multiplo_3[count] = matriz[i][j];
                count++;
            }
        }
    }
    printf("MULTIPLOS DE 3: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", multiplo_3[i]);
    }
}
#include <stdio.h>
int main(){
    int matriz[3][7];
    int count=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (matriz[i][j] > 10 && matriz[i][j] < 50)
            {
                count++;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (matriz[i][j] > 10 && matriz[i][j] < 50)
            {
                printf("%2d" ,matriz[i][j]);
            } else{
                matriz[i][j] = 0;
                printf("%2d", matriz[i][j]);
            }
        }
        printf("\n");
    }
    
}
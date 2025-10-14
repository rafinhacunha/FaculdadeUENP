#include <stdio.h>
int main(){
    int matriz[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    int *p;
    p = &matriz[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", *(p+i*4+j));
        }
        printf("\n");
    }
    
}
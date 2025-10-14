#include <stdio.h>
int main(){
    int i_, j_;
    printf("Diga a linha e a coluna: ");
    scanf("%d %d", &i_, &j_);
    int matriz[i_][j_];
    for (int i = 0; i < i_; i++)
    {
        for (int j = 0; j < j_; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < i_; i++) {
        for (int j = 0; j < j_; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("transposta\n");
    for (int j = 0; j < j_; j++)
    {
        for (int i = 0; i < i_; i++)
        {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}
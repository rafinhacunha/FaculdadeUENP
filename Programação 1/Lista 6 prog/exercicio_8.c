#include <stdio.h>
void somaSemdiagonal(int matriz[][10], int n){
    int soma=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && i != n - j - 1)
            {
                soma += matriz[i][j];    
            }
        }
    }
    printf("%d", soma);
}
int main(){
    int n;
    scanf("%d", &n);
    int matriz[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    somaSemdiagonal(matriz, n);
}
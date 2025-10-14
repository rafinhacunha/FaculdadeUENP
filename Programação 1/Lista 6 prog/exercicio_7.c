#include <stdio.h>
void diagonalSecundaria(int matriz[][10], int n, int x){
    for (int i = 0; i < n; i++) {
        matriz[i][n - i - 1] *= x;
    }
}

void imprimirDiagonal(int matriz[][10], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%2d", matriz[i][j]);
        }
    printf("\n");
    }
    
}
int main(){
    int n, x;
    printf("Dimensao da matriz: ");
    scanf("%d", &n);
    printf("Constante para multiplicar a diagonal secundaria: ");
    scanf("%d", &x);
    int matriz[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("[%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        } 
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%2d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal multiplicada pela constante: \n");
    diagonalSecundaria(matriz, n, x);
    imprimirDiagonal(matriz, n);
}
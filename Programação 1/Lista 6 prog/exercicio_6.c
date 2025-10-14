#include <stdio.h>
int soma(int matriz[][10], int n){
    int adicao = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i < j) {
                adicao += matriz[i][j];
            }
        }
    }
    return adicao;
}
int main(){
    int n;
    printf("Defina a dimensão da matriz quadrada: ");
    scanf("%d", &n);
    int matriz[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("[%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    int result = soma(matriz, n);
    printf("A soma eh: %d", result);
}
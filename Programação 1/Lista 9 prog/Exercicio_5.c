#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, contador=0;
    printf("Informe um numero: ");
    scanf("%d", &n);
    int *divisores;
    for (int i = 1; i < n; i++)
    {
        if (n % i==0)
        {
            contador++;
        }
    }
    divisores = (int*)calloc(contador,sizeof(int));
    int indice=0;
    for (int i = 1; i < n; i++)
    {
        if (n % i==0)
        {
            divisores[indice] = i;
            indice++;
        }
    }
    printf("Divisores: ");
    for (int i = 0; i < contador; i++)
    {
        printf("%d ", divisores[i]);
    }
    printf("\nQuantidade de divisores: %d", contador);
    free(divisores);
}
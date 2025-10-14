#include <stdio.h>

    int main(){
        int num;
        printf("Diga o tamanho da sequencia: ");
        scanf("%i", &num);
        int vet[num];
        int i=0;
        for (i = 0; i < num; i++)
        {
            printf("valor: ");
            scanf("%d", &vet[i]);
        }
        num--;
        printf("Valor inverso: \n");
        for (int j = 0; num >= j; num--)
        {
            printf("%d ", vet[num]);
        }
    }
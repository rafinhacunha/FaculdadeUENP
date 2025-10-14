#include <stdio.h>
    int main(){
        int vet[50], Par[25], Impar[25];
        int par = 0, impar = 0;

    for (int i = 0; i < 50; i++)
    {
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < 50; i++)
    {
        if (vet[i] % 2 == 0)
        {
            Par[par] = vet[i];
            par++;
        }
        else if (vet[i] % 2 != 0)
        {
            Impar[impar] = vet[i];
            impar++;
        }
    }
        printf("PAR: ");
        for (int i = 0; i < par; i++)
        {
            printf("%d ", Par[i]);
        }
        printf("\nIMPAR: ");
        for (int i = 0; i < impar; i++)
        {
            printf("%d ", Impar[i]);
        }
        
    }
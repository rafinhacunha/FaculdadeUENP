#include <stdio.h>
int main(){
    int vet[22];
    for (int i = 0; i < 22; i++)
    {
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < 21; i++)
    {
        if (vet[i] == vet[21])
        {
            printf("Vetor %d eh igual ao Vetor 21\n", i);
        }
    }
}
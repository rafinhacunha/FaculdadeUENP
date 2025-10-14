#include <stdio.h>
int main(){
    int vet[20];
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vet[i]);
    }
    int troca;
    for (int i = 0; i < 10; i++)
    {
        troca = vet[i];
        vet[i] = vet[i + 10];
        vet[i + 10] = troca;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", vet[i]);
    }
}
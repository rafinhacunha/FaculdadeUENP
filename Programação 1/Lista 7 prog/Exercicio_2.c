// Implemente uma fun ̧c ̃ao achar( ) que receba um vetor de inteiros e mostra o maior e o menor elemento. Ñao imprima os valores na fun ̧c ̃ao achar(...) e sim na main( ).

#include <stdio.h>

void achar(int vet[], int tamanho, int *maior, int *menor){
    *maior = vet[0];
    *menor = vet[0];
    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i] > *maior)
        {
            *maior = vet[i];
        }
        if (vet[i] < *menor)
        {
            *menor = vet[i];
        }
    }
}

int main(){
    int vet[] = {5, 6, 25, 52, 6, 12, 24};
    int maior, menor;
    int tamanho = sizeof(vet) / sizeof(vet[0]);
    achar(vet, tamanho, &maior, &menor);
    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);

    return 0;
}
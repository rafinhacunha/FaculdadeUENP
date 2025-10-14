#include <stdio.h>
#define tam 100

int main() {
    int vet[tam];
    int n, mais30 = 0, menos18 = 0;
    for (int i = 0; 1; i++)
    {
        printf("Digite a idade(escreva 0 para encerrar o programa): ");
        scanf("%d", &vet[i]);
        if (vet[i] < 18)
        {
            menos18++;
        }
        else if (vet[i] > 30)
        {
            mais30++;
        }
        n = vet[i];
        if (n == 0)
        {
            break;
        }
    }
    printf("Total de pessoas com menos de 18 anos: %d\n", menos18);
    printf("Total de pessoas com mais de 30: %d", mais30);
}
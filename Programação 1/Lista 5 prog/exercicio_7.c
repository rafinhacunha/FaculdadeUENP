#include <stdio.h>
    void Maior(int n, int vet[]){
        int maior=0;
        for (int i = 0; i < n; i++)
        {
            if (vet[i] > maior)
            {
                maior = vet[i]; 
            }
        }
        printf("O maior numero da sequencia eh %d", maior);
    }
int main(){
    int n;
    printf("Informe o tamanho da sequencia: ");
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }
    Maior(n, vet);
}
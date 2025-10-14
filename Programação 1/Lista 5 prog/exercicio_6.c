#include <stdio.h>
    void Multiplo(int vet[], int tam){
        for (int i = 0; i < tam; i++)
        {
            if (vet[i]%7 == 0)
            {
                printf("%d ", vet[i]);
            }
        }
}
    int main(){
    int tam;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    int vet[tam];
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
    Multiplo(vet, tam);
}

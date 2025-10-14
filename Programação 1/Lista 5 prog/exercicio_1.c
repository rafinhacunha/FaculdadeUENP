#include <stdio.h>
void VetOcorrencia(int n){
    int vet[n];
        for (int i = 0; i < n; i++)
        {
            printf("Digite o valor: ");
            scanf("%d", &vet[i]);
        }
        int count=0;
        n--;
        for (int i=0; i < n; i++)
        {
            if (vet[i] == vet[n])
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("%d Ocorrencia", count);
        }
        else
        {
        printf("%d Ocorrencias", count);
        }
}

    int main(){
        int n;
        scanf("%d", &n);
        VetOcorrencia(n);
    }
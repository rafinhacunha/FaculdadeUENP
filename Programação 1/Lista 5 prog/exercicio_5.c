#include <stdio.h>
#define tam 100
int main(){
    int vet[tam];
    int count=0;
    for (int i = 0; 1; i++)
    {
        scanf("%d", &vet[i]);
        if (vet[i] > 10 && vet[i] < 50)
        {
            count++;
        }
        if (vet[i] == -1)
        {
            break;
        }
    }
    printf("No intervalo entre 10 e 50 tem %d numeros", count);
}
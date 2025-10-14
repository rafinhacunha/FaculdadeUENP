#include <stdio.h>

int main() {
    int quantidade, contador = 0, numero;
    float media, soma=0;
    scanf("%d", &quantidade);
    while (contador < quantidade)
    {
        scanf("%d", &numero);
        soma += numero;
        contador++;
    }
    media = soma / quantidade;
    printf("%.2f", media);
}
    
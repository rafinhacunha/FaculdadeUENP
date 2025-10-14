#include <stdio.h>

int main() {
    int num, count = 0, soma = 0;

    printf("Digite uma sequencia de números inteiros (0 para encerrar):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num >= 10 && num <= 50 && num % 7 == 0) {
            count++;
            soma += num;
        }
    }

    if (count > 0) {
        float media = (float)soma / count;
        printf("Quantidade de numeros multiplos de 7 entre 10 e 50: %d\n", count);
        printf("Media desses numeros: %.2f\n", media);
    } else {
        printf("Nenhum numero multiplo de 7 entre 10 e 50 foi digitado.\n");
    }

    return 0;
}
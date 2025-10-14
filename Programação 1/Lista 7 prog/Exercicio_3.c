//Fa ̧ca um programa que leia uma sequˆencia de 51 n ́umeros inteiros, e utilizando uma fun ̧c ̃aocom ponteiros, verifique se o  ́ultimo n ́umero est ́a presente nos 50 primeiros n ́umeros e mostreas posi ̧c ̃oes do vetor em que ele est ́a presente.

#include <stdio.h>

// Função para verificar se o último número está nos 50 primeiros
void verificar_presenca(int *vetor, int ultimo_numero, int tamanho) {
    int encontrado = 0;
    printf("O número %d aparece nas seguintes posições: ", ultimo_numero);
    for (int i = 0; i < tamanho; i++) {
        if (*(vetor + i) == ultimo_numero) {
            printf("%d ", i);  // Imprime a posição onde o número foi encontrado
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("O número não foi encontrado.");
    }
    printf("\n");
}

int main() {
    int numeros[51];

    // Leitura dos 51 números
    printf("Digite 51 números inteiros:\n");
    for (int i = 0; i < 51; i++) {
        scanf("%d", &numeros[i]);
    }

    // Chama a função para verificar a presença do último número nos 50 primeiros
    verificar_presenca(numeros, numeros[50], 50);

    return 0;
}

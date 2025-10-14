#include <stdio.h>

void bubbleSort(float vetor[], int n) {
    int i, j;
    float temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n];

    printf("Digite os números reais:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
    }

    bubbleSort(vetor, n);

    printf("Vetor ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%f ", vetor[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {

    // Declaração e inicialização da matriz 2x2
    int matriz[2][2] = { {1, 3}, {5, 7} };

    // Declaração dos ponteiros
    int *p1 = &matriz[0][0];
    int *p2 = &matriz[1][0];
    int **pp1 = &p1;
    int **pp2 = &p2;
    int ***ppp1 = &pp1;

    // Modificação dos valores usando ponteiros
    ***ppp1 = 2;              // Altera matriz[0][0] para 2
    *(*pp1 + 2) = 4;          // Altera matriz[1][0] para 4
    *(*pp2 + 1) = 9;          // Altera matriz[1][1] para 9

    // Impressão da matriz modificada
    printf("%d %d\n", matriz[0][0], matriz[0][1]);
    printf("%d %d\n", matriz[1][0], matriz[1][1]);

    return 0;
}
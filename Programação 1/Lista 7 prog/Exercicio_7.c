#include <stdio.h>

int main() {
    int x = 5, y = 7;
    int *px = &x;
    int *py = &y;
    int **ppx = &px;
    int **ppy = &py;
    int ***pppx = &ppx;
    int ***pppy = &ppy;

    // Atribuições e operações com ponteiros
    ppx = ppy;            // ppx agora aponta para o mesmo endereço que ppy (px aponta para y)
    x = **ppy;            // x recebe o valor apontado por ppy (valor de y)
    ***pppy += (**ppx);   // y é incrementado pelo valor de y (pois ppx e ppy agora apontam para o mesmo lugar)

    // Impressão dos resultados
    printf("%d %d\n", x, y);               // Imprime os valores de x e y
    printf("%d %d %d\n", ***pppx, ***pppy, px != py);  // Imprime os valores apontados por pppx e pppy e a comparação px != py

    return 0;
}

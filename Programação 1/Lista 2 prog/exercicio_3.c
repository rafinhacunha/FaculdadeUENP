#include <stdio.h>

int main() {
    float a, b, c;
    float media;
    int contador=0;
    printf("Digite os tres numeros: ");
    scanf("%f %f %f", &a, &b, &c);
    media = (a+b+c)/3;
    if (a>media)
    {
        contador++;
    } if (b>media)
    {
        contador++;
    } if (c>media)
    {
        contador++;
    }
        printf("Quantidade acima da media: %i", contador);
}
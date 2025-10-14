#include <stdio.h>
int main(){
    int contador=0;
    float altura, idade;
        printf("ALTURA e IDADE: ");
        scanf("%f%f", &altura, &idade);
    if (altura >= 1.50 && idade >= 12)
    {
        contador++;
    }
    if (altura >= 1.40 && idade >= 14)
    {
        contador++;
    }
    if (altura >= 1.70 && idade >= 16)
    {
        contador++;
    }
    printf("VOCE PODE IR EM %i BRINQUEDOS", contador);
 
}
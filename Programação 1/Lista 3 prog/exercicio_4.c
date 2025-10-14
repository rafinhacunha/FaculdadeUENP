#include <stdio.h>
    int main(){
        float soma, numerador = 1;
        float i=1;
        while (i <= 50)
        {
            soma += numerador/i;
            i++;
            numerador = numerador + 2;
        }
        printf("%.2f", soma);
    }
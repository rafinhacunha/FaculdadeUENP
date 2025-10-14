#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c;
    float delta;
    float positivo, negativo;
        printf("Informe os valores de a, b e c: ");
        scanf("%f%f%f", &a, &b, &c);
        if(b == 0 || c == 0){
            printf("Nao e uma equacao do segundo grau");
        }
        else{
            delta = pow(b,2) - 4 * a * c;
         if(delta > 0){
            positivo = (-b + sqrt(delta))/ (2*a);
            negativo = (-b - sqrt(delta))/ (2*a);
            printf("Positivo: %f\nNegativo: %f", positivo, negativo);
        } else{
        printf("Nao existem raizes reais");
        }
        }
        return 0;
}

#include <stdio.h>
int main(){
    float x,y;
        printf("INFORME O VALOR DE X E Y: ");
        scanf("%f %f", &x, &y);
        if (x>0 && y>0)
        {
            printf("PRIMEIRO QUADRANTE");
        } else if (x<0 && y>0){
            printf("SEGUNDO QUADRANTE");
        } else if (x<0 && y<0){
            printf("TERCEIRO QUADRANTE");
        } else if (x>0 && y<0){
            printf("QUARTO QUADRANTE");
        } else if (y == 0){
            printf("EIXO X");
        } else {
            printf("EIXO Y");
        }
            return 0;
}
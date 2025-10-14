#include <stdio.h>
#include <stdlib.h>
int main(){
    float lado1, lado2, lado3;
        printf("Informe o comprimento dos lados do triangulo(PRECISAM SER MAIORES QUE 0): ");
        scanf("%f %f %f", &lado1, &lado2, &lado3);
        if(lado1 == lado2 && lado2 == lado3){
            printf("EQUILATERO");
        } else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
            printf("ISOSCELES");
        }else{
            printf("ESCALENO");
        }
    return 0;
}

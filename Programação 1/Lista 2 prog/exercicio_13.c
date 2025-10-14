#include <stdio.h>
int main(){
    float saldo_medio, credito;
    printf("SALDO MEDIO: ");
    scanf("%f", &saldo_medio);
    if (400<saldo_medio)
    {
        credito=saldo_medio*0.30;
        printf("VALOR DE CREDITO: %.2f", credito);
    } else if(300 < saldo_medio && saldo_medio <= 400){
        credito=saldo_medio*0.25;
        printf("VALOR DE CREDITO: %.2f", credito);
    } else if(saldo_medio > 200 && saldo_medio <= 300){
        credito=saldo_medio*0.30;
        printf("VALOR DE CREDITO: %.2f", credito);
    } else{
        credito=saldo_medio*0.10;
        printf("VALOR DE CREDITO: %.2f", credito);
    }
    return 0;
}
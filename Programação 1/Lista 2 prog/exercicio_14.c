#include <stdio.h>
int main(){
    float andou, consumo_medio;
    char carro;
        printf("DIGA O QUANTO O CARRO ANDOU(em km): ");
        scanf("%f", &andou);
        printf("TIPO DO CARRO: ");
        scanf(" %c", &carro);
        switch (carro)
        {
        case 'a':
            consumo_medio = andou/15.0;
            printf("CONSUMO MEDIO: %.2f", consumo_medio);
            break;
        case 'b':
            consumo_medio = andou/12.0;   
            printf("CONSUMO MEDIO: %.2f", consumo_medio);
            break;
        case 'c':
            consumo_medio = andou/10.0;
            printf("CONSUMO MEDIO: %.2f", consumo_medio);  
            break;   
            default:
            printf("TIPO INVALIDO");
        }
}
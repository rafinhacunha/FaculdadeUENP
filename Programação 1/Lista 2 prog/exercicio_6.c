#include <stdio.h>
#include <stdlib.h>
int main(){
    float preco, preco_quantidade;
    int codigo, quantidade;
    float preco_desconto;
    float desconto;
    printf("CODIGO DO PRODUTO: ");
        scanf("%i", &codigo );
    printf("QUANTIDADE: ");
    scanf("%i", &quantidade);
    switch(codigo){
        case 1:
        preco = 5.30;
        preco_quantidade = preco * quantidade;
        if(quantidade >= 15 || preco_quantidade >= 40){
           desconto = preco_quantidade * 0.15;
           preco_desconto = preco_quantidade - desconto;
                printf("PRECO COM DESCONTO: %.2f", preco_desconto);
        }else{
        printf("%.1f", preco_quantidade);
        } break;
        case 2:
        preco = 6.00;
        preco_quantidade = preco * quantidade;
        if(quantidade >= 15 || preco_quantidade >= 40){
           desconto = preco_quantidade * 0.15;
           preco_desconto = preco_quantidade - desconto;
                printf("PRECO COM DESCONTO: %.2f", preco_desconto);
        }else{
        printf("%.1f", preco_quantidade);
        } break;
        case 3:
        preco = 3.20;
        preco_quantidade = preco * quantidade;
        if(quantidade >= 15 || preco_quantidade >= 40){
           desconto = preco_quantidade * 0.15;
           preco_desconto = preco_quantidade - desconto;
                printf("PRECO COM DESCONTO: %.2f", preco_desconto);
        }else{
        printf("%.1f", preco_quantidade);
        } break;
        case 4:
        preco = 2.50;
        preco_quantidade = preco * quantidade;
        if(quantidade >= 15 || preco_quantidade >= 40){
           desconto = preco_quantidade * 0.15;
           preco_desconto = preco_quantidade - desconto;
                printf("PRECO COM DESCONTO: %.2f", preco_desconto);
        }else{
        printf("%.1f", preco_quantidade);
        } break;
        default:
            printf("CODIGO INVALIDO");
    }
   
        return 0;
}
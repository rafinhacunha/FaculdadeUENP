#include <stdio.h>
int main(){
    int resultado1, resultado2, resultado3;
    int int_graf, int_art, enca, inde, structs;
    printf("INFORME COM 1 OU 0 RESPECTIVAMENTE SE OS RESQUISITOS FORAM CUMPRIDOS: ");
    scanf("%i%i%i%i%i", &int_graf, &int_art, &enca, &inde, &structs);
    resultado1 = int_graf || int_art;
    resultado2 = enca && inde;
    resultado3 = structs;
    printf("PRIMEIROS REQUISITO: %i\nSEGUNDO REQUISITO: %i\nTERCEIRO REQUISITO: %i", resultado1, resultado2, resultado3);
}

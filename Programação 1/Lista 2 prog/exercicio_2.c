#include <stdio.h>
int main(){
    int primeiro, segundo, terceiro;
    printf("Informe 3 numeros inteiros: ");
    scanf("%i %i %i", &primeiro, &segundo, &terceiro);
    if(primeiro < segundo && primeiro < terceiro){
        printf("%i MENOR", primeiro);
    } else if(segundo < primeiro && segundo < terceiro){
        printf("%i MENOR", segundo);
    } else{
        printf("%i MENOR", terceiro);
    }
}
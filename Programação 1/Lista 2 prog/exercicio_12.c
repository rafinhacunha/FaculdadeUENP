#include <stdio.h>
int main(){
    int n1, n2, n3;
    printf("DIGITE 3 NUMEROS INTEIROS: ");
    scanf("%i %i %i", &n1, &n2, &n3);
    if(n1>n2 && n2>n3){
        printf("DECRESCENTE: %i %i %i", n3, n2, n1);
    } else if(n2>n1 && n1>n3){
        printf("DECRESCENTE: %i %i %i", n3, n1, n2);
    } else if(n1>n2 && n3>n2){
        printf("DECRESCENTE: %i %i %i", n2, n3, n1);
    } else if(n2>n1 && n3>n1){
        printf("DECRESCENTE: %i %i %i", n1, n3, n2);
    } else if (n3>n1 && n1>n2){
        printf("DECRESCENTE: %i %i %i", n2, n1, n3);
    } else{
        printf("DECRESCENTE: %i %i %i", n1, n2, n3);
    }
    return 0;
}
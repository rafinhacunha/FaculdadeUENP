#include <stdio.h>
int main(){
    int inicio, fim;
    printf("diga o inicio e fim: ");
    scanf("%i %i", &inicio, &fim);
    inicio++;
    while (inicio < fim){
        if (inicio % 2 == 1)
        {
            printf("%d\n", inicio);
        }
        inicio++;
    }
   return 0;
}
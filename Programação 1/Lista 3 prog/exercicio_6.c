#include <stdio.h>

int main() {
    int idade;
    int menores_de_18 = 0;
    int maiores_de_30 = 0;
    while (1)
    {
        scanf("%d", &idade);

    if (idade == 0){
    
        break;
    }
    
    if (idade < 18){
        menores_de_18++;
    }
    if (idade > 30){
        maiores_de_30++;
    }
    }
        printf("Total com menores de 18: %i\nTotal com mais de 30: %i", menores_de_18, maiores_de_30);

}
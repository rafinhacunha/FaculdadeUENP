#include <stdio.h>
#include <string.h>
#define MAX 500

void contara(char *ptr, int tamanho, int *contar){
    for (int i = 0; i < tamanho; i++)
    {
        if (ptr[i] == ' ')
        {
            (*contar)++;
        }
    }
    printf("Quantidade de espacos : %d", *contar);
}

int main(){
    char palavra[MAX+1];
    fgets(palavra, MAX+1, stdin);
    int contar=0;

    contara(palavra, strlen(palavra), &contar);
}
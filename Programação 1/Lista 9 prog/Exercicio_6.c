#include <stdio.h>
#include <stdlib.h>
#define MAX 500

int main(){
    int count=0;
    int contador=0;
    printf("Digite uma palavra/frase: ");
    char string_1[MAX+1];
    fgets(string_1, MAX+1, stdin);
    for (int i = 0; string_1[i] != '\0'; i++)
    {
        count++;
    }
    char *string;
    string = (char*)calloc(count+1, sizeof(char));
    for (int i = 0; i < count; i++)
    {
        string[i] = string_1[i];
    }
    string[count] = '\0';
    for (int i = 0; i < count; i++)
    {
        if (string[i] == ' ')
        {
            contador++;
        }
    }
    printf("Quantidade de espacos em branco: %d\n", contador);
    printf("String copiada: %s\n", string);
    free(string);
}
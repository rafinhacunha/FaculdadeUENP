#include <stdio.h>
    void resposta(char n){
        if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')
        {
            printf("Vogal");
        } else{
            printf("Consoante");
        }
    }
    int main(){
        char n;
        scanf("%c", &n);
        resposta(n);
    }
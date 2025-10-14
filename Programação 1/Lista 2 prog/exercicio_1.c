#include <stdio.h>

int main(){
    char vogal;
        printf("Informe um caractere: ");
        scanf("%s", &vogal);
            if(vogal == 'a'|| vogal == 'e'|| vogal == 'i'|| vogal == 'o'|| vogal == 'u'||
            vogal == 'A'|| vogal == 'E'|| vogal == 'I'|| vogal == 'O'|| vogal == 'U'){
                printf("VOGAL");
            }
            else{
                printf("CONSOANTE");
            }
        return 0;    
}
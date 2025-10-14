#include <stdio.h>
#include <string.h>

int main(){
    char palavra[] = "ponteiros em c";
    int count=1;
    char *ptr;
    ptr = &palavra[strlen(palavra) - 1];
    for (int i = strlen(palavra); i > 0; i--)
    {
       printf("%c", *(ptr - count + 1));
       count++;  
    }
}
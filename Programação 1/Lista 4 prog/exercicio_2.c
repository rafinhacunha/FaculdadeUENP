#include<stdio.h>
void primo(int n)
{
    if(n != 2 && n % 2 == 0 || n % 3 == 0 && n % 5 == 0)
    {
        printf("Numero nao primo\n");
    }

    else if(n % 1 == 0 && n % n == 0)
    {
        printf("Numero primo\n");
    }
}
int main()
{
        int n;
        printf("Digite um numero: ");
        scanf("%d", &n);
        primo(n);
}
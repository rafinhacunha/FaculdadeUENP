#include <stdio.h>

int main() {
    int n;
    float soma = 1, i = 2;
    
        scanf("%d", &n);
    while (i <= n)
    {
        soma += 1/i;
        i++;
    }
    printf("%.2f", soma);
        return 0;
}
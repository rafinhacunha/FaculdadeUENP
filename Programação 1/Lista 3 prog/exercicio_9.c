#include <stdio.h>

int main() {
    int num, i, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 1) {
        primo = 0;
    } else {
        i = 2;
        while (i <= num / 2) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
            i++;
        }
    }

    if (primo) {
        printf("%d eh um numero primo.\n", num);
    } else {
        printf("%d não eh um numero primo.\n", num);
    }

    return 0;
}
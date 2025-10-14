#include <stdio.h>

int main()
{
    int n=1, multiplo, j;
    while (n <= 10)
    {
        printf("Tabuada do %d:\n", n);
        j = 1;
         while (j <= 10)
         {
            multiplo = n * j;
            printf("%d x %d = %d\n", n, j, multiplo);
            j++;
         }
        printf("\n");
        n++;
    }

    return 0;
}
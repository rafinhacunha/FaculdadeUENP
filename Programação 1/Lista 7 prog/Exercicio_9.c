#include <stdio.h>

int main(){
    int n;
    printf("Valor de n: ");
    scanf("%d", &n);
    int vet[n];
    int *ptr1, *ptr2;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }
    int num = n--;
    ptr1 = &vet[0];
    ptr2 = &vet[num];
    while (ptr1 <= ptr2)
    {
        if (ptr1 == ptr2)
        {
            printf("%d", *ptr1);
        }
        ptr1++;
        ptr2--;
    }
    
}
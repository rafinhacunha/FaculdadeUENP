#include <stdio.h>
int main(){
    int vet[5] = {1,2,3,4,5};
    int *p;
    p = &vet[0];
    int vet2[5];
    for (int i = 0; i < 5; i++)
    {
        vet2[i] = *(p+i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("[%d] ", vet2[i]);
    }
    
}
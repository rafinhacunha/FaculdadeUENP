#include <stdio.h>
    int divisor (int n){
        int j=1;
        int divi=0;
        while (j <= n)
        {
            if (n % j == 0)
            {
                printf("%d ", j);
                divi++;
            } 
        j++;    
        }
        return divi;
    }
int main(){
    int n;
    int divis;
    scanf("%d", &n);
    divis = divisor(n);
    printf("\nQuantidade de divisores: %d", divis);
}   
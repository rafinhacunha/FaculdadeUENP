#include <stdio.h>

int tabuada(int n){
    int resultado;
    int j=1;
    int num=1;
    while (j <= 10)
    {
        resultado = n * j;
        printf("%d x %d : %d\n", n, num, resultado);
        j++;
        num++;
    }
    return resultado;
}
int main(){
    int n;
    scanf("%d", &n);
    tabuada(n);
}
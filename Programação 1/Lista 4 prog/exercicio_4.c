#include <stdio.h>
float potencia(int x, int n){
    int count=2;
    int rep;
    rep = x;
    if(n == 1){
        printf("%d", x);
    }else if (n == 0){
        printf("1");
    }else{
    while (count <= n)
    {
        x *= rep;
        printf("%d\n", x);
        count++;
    }}
    return x;
}

int main(){
    int n, x, result;
    scanf("%i%i",&n, &x);
    result = potencia(x, n);
    printf("%d", result);
    return 0;
}

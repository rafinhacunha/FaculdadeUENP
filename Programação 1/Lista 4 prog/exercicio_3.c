#include <stdio.h> 
#include <math.h>
    float delta(float a, float b, float c){
        return pow(b,2) - 4 * a * c; 
    }
    float bhaskaraP(float a, float b, float c){
        return (-b + sqrt(delta(a, b, c)))/ (2 * a);
    }
    float bhaskaraN(float a, float b, float c){
        return (-b - sqrt(delta(a, b, c)))/ (2 * a);
    }
int main(){
    float a, b, c;
    float delta2;
    float posi, nega;
    printf("Valores de a, b e c: ");
        scanf("%f %f %f", &a, &b, &c);
    if (b==0 || c==0)
    {
        printf("Nao eh uma equacao do segundo grau");
    } else{
        delta2 = delta(a, b, c); 
        posi = bhaskaraP(a, b, c);
        nega = bhaskaraN(a, b, c);
        if (delta2 > 0)
        {
            printf("Positivo: %.1f\nNegativo: %.1f", posi, nega);
        } else{
            printf("Nao existem raizes reais");
        }
    }
    return 0;
}
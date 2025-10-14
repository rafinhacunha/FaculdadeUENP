#include <stdio.h>

    float area(float largura, float comprimento){
        return largura * comprimento;
    }
int main(){
    int n;
    int count2=0;
    int count=1;
    float largura, comprimento, result;
    printf("Quantidade de terrenos: ");
    scanf("%d", &n);
    while (count <= n)
    {
        count2++;
        printf("Informe o comprimento e a largura: ");
        scanf("%f %f", &largura, &comprimento);
        result = area(largura, comprimento);
        printf("\nArea %d = %.1f\n", count2, result);
        count++;
    }
    return 0;
}
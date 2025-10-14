#include <stdio.h>
#include <math.h>
int main(){
    float x, y;
    float media, diferenca, produto, divisao;
    int opcao;
    printf("INFORME RESPECTIVAMENTE OS VALORES DE X E Y: ");
    scanf("%f %f", &x, &y);
    printf("INFORME SUA OPCAO DE ACORDO COM O GRAFICO: ");
    scanf("%i", &opcao);
        switch (opcao)
        {
        case 1:
            media = (x+y)/2;
            printf("MEDIA: %.2f", media);
            break;
        case 2:
            diferenca = x-y;
            printf("DIFERENCA: %.2f", diferenca);
            break;
        case 3:
            produto = x*y;
            printf("PRODUTO: %.2f", produto);
            break;
        case 4:
            divisao = x/y;
            if (y == 0)
            {
                printf("NAO HA COMO DIVIDIR O ZERO POR ALGUM NUMERO");
            } else {
                printf("DIVISAO: %.2f", divisao);
            }
            break;
        default:
            printf("OPCAO INVALIDA, TENTE NOVAMENTE");
            break;
        }
        return 0;
}
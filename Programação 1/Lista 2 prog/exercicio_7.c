#include <stdio.h>
int main(){
    float salario, salario_total;
    int codigo;
    printf("SALARIO ATUAL: ");
    scanf("%f", &salario);
    printf("CARGO DE ACORDO COM O CODIGO: ");
    scanf("%i", &codigo);
        switch(codigo){
            case 1:
            salario_total= (salario*0.10) + salario;
            printf("CARGO: VENDEDOR\nSALARIO COM REAJUSTE: %.2f", salario_total);
            break;
            case 2:
            salario_total= (salario*0.07) + salario;
            printf("CARGO: AUXILIAR DE ESCRITORIO\nSALARIO COM REAJUSTE: %.2f", salario_total);
            break;
            case 3:
            salario_total= (salario*0.12) + salario;
            printf("CARGO: AUXILIAR DE ENFERMAGEM\nSALARIO COM REAJUSTE: %.2f", salario_total);
            break;
            case 4:
            salario_total= (salario*0.11) + salario;
            printf("CARGO: BIBLIOTECARIO(a)\nSALARIO COM REAJUSTE: %.2f", salario_total);
            break;
            default:
            printf("CODIGO INVALIDO, TENTE NOVAMENTE");
            break;
        } 
        return 0;
}
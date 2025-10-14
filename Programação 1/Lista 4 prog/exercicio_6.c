#include <stdio.h>
    float imc(float peso, float altura){
        float result;
        result = peso / (altura * altura);
        return result;
    }
    void resposta(float peso, float altura){
            if (imc (peso, altura) < 18.5){
                printf("Abaixo do peso");
            } else if ( 18.5 <= imc (peso, altura) && imc (peso, altura) <= 24.9){
                printf("Peso normal");
            } else if (25 <= imc (peso, altura) && imc (peso, altura) <= 29.9){
                printf("Sobrepeso");
            } else{
                printf("Obeso");
            } 
    }
int main(){
    float peso, altura;
    float resultado;
    scanf("%f %f", &peso, &altura);
    resultado = imc(peso, altura);
    printf("IMC: %.1f\n", resultado);
    resposta(peso, altura);
}
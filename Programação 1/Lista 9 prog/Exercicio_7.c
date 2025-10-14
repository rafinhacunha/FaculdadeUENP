#include <stdio.h>
#include <stdlib.h>

int main(){
    struct empresa
    {
        char nome[50];
        int idade;
        float salario;
    };
    struct empresa *cadastro;
    int n;
    printf("Defina a quantidade de funcionarios na empresa: ");
    scanf("%d", &n);
    getchar();
    cadastro = (struct empresa*)calloc(n, sizeof(struct empresa));
    for (int i = 0; i < n; i++)
    {
        printf("FUNCIONARIO %d", i+1);
        printf("\nDiga o nome do funcionario: ");
        fgets(cadastro[i].nome, 50, stdin);
        printf("\nIdade do funcionario: ");
        scanf("%d", &cadastro[i].idade);
        printf("Salario do funcionario: ");
        scanf("%f", &cadastro[i].salario);
        getchar();
    }
    float soma=0;
    float media=0;
    for (int i = 0; i < n; i++)
    {
        soma += cadastro[i].salario;
    }
    media = soma/n;
    printf("Media de salario dos funcionarios: %.1f", media);
    free(cadastro);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

void listarFuncionarios(Funcionario funcionarios[], int qtd) {
    if (qtd == 0) {
        printf("\nNenhum funcionário cadastrado.\n");
    } else {
        printf("\n--- Lista de Funcionários ---\n");
        for (int i = 0; i < qtd; i++) {
            printf("%d. Nome: %s, Idade: %d, Salário: R$ %.2f\n", i + 1, funcionarios[i].nome, funcionarios[i].idade, funcionarios[i].salario);
        }
    }
}

void filtrarPorSalario(Funcionario funcionarios[], int qtd, float valor) {
    int encontrou = 0;
    printf("\n--- Funcionários com salário maior que R$ %.2f ---\n", valor);
    for (int i = 0; i < qtd; i++) {
        if (funcionarios[i].salario > valor) {
            printf("%d. Nome: %s, Idade: %d, Salário: R$ %.2f\n", i + 1, funcionarios[i].nome, funcionarios[i].idade, funcionarios[i].salario);
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("Nenhum funcionário com salário maior que R$ %.2f.\n", valor);
    }
}

int main() {
    Funcionario funcionarios[100];
    int qtd = 0;
    int opcao;
    
    do {
        printf("\n--- Menu ---\n");
        printf("1. Adicionar funcionário\n");
        printf("2. Listar todos os funcionários\n");
        printf("3. Filtrar por salário\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1: {
                printf("Nome: ");
                fgets(funcionarios[qtd].nome, 50, stdin);
                funcionarios[qtd].nome[strcspn(funcionarios[qtd].nome, "\n")] = 0;  

                printf("Idade: ");
                scanf("%d", &funcionarios[qtd].idade);

                printf("Salário: ");
                scanf("%f", &funcionarios[qtd].salario);

                qtd++;
                break;
            }
            case 2:
 
                listarFuncionarios(funcionarios, qtd);
                break;

            case 3: {

                float valor;
                printf("Digite o valor do salário para filtrar: R$ ");
                scanf("%f", &valor);
                filtrarPorSalario(funcionarios, qtd, valor);
                break;
            }

            case 4:

                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}

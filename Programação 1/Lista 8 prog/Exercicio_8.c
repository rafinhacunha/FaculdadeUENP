#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 500

int main() {
    struct loja {
        int codigo[MAX];
        float preco[MAX];
        char descricao[MAX][MAX + 1];
    };
    struct loja produto;
    int resposta;
    int count = 0;
    int contadorloja = 1;
    float percentual = 0;
    float produto_percentual[MAX];
    do {
        printf("\n======= MENU =======\n");
        printf("[1] - Cadastrar produto\n");
        printf("[2] - Mostrar produtos\n");
        printf("[3] - Ajustar preco por percentual\n");
        printf("[4] - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &resposta);
        switch (resposta) {
        case 1:
            printf("\nCadastro de produto\n");
            printf("Codigo do produto: ");
            scanf("%d", &produto.codigo[count]);
            printf("Preco do produto: R$ ");
            scanf("%f", &produto.preco[count]);
            getchar();
            printf("Descricao do produto: ");
            fgets(produto.descricao[count], MAX + 1, stdin);
            count++;
            printf("\nProduto cadastrado com sucesso!\n");
            break;
        case 2:
            printf("\n===== Lista de Produtos =====\n");
            contadorloja = 1;
            for (int i = 0; i < count; i++) {
                printf("Produto [%d]\n", contadorloja);
                printf("Codigo: %d\n", produto.codigo[i]);
                printf("Preco: R$ %.2f\n", produto.preco[i]);
                printf("Descricao: %s", produto.descricao[i]);
                printf("------------------------\n");
                contadorloja++;
            }
            if (count == 0) {
                printf("Nenhum produto cadastrado.\n");
            }
            break;
        case 3:
            printf("Digite o percentual de ajuste de preco: ");
            scanf("%f", &percentual);
            percentual = percentual / 100;
            printf("\nAjustando precos...\n");
            contadorloja = 1;
            for (int i = 0; i < count; i++) {
                produto_percentual[i] = produto.preco[i] * percentual;
                printf("Produto [%d]\n", contadorloja);
                printf("Novo preco do produto: R$ %.2f\n", produto.preco[i] + produto_percentual[i]);
                printf("---------------------\n");
                contadorloja++;
            }
            break;
        case 4:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("\nOpção invalida! Tente novamente.\n");
        }
    } while (resposta != 4);
    return 0;
}

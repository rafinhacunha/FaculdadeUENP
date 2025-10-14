#include <stdio.h>
int main(){
    struct lojas
    {
        char nome_loja[100][100];
        char endereco[100][200];
        int telefone[100];
        float preco_produto[100];
    };
    struct lojas loja;
    int resposta;
    float somamedia, mediapreco;
    int count=0;
    while (1)
    {
        printf("\n----------MENU----------\n");
        printf("[1] - Cadastrar loja\n[2] - Media dos produtos");
        printf("\nInforme sua escolha: ");
        scanf("%d", &resposta);
        if (resposta == 1)
        {
            fflush(stdin);
            printf("Nome da loja.......: ");
            fgets(loja.nome_loja[count], 100, stdin);
            printf("Endereco.......: ");
            fgets(loja.endereco[count], 200, stdin);
            printf("Telefone.......: ");
            scanf("%d", &loja.telefone[count]);
            getchar();
            printf("Preco produto especifico.......: ");
            scanf("%f", &loja.preco_produto[count]);
            getchar();
            count++;
        }
        if (resposta == 2)
        {
            somamedia = 0;
            mediapreco = 0;
            for (int i = 0; i < count; i++)
            {
                somamedia += loja.preco_produto[i];
            }
            mediapreco = somamedia/count;
            printf("\n----------MEDIA----------\n");
            printf("Media dos produtos cadastrados......: %.1f", mediapreco);
            printf("\n----------LOJAS CADASTRADAS----------\n");
            for (int i = 0; i < count; i++)
            {
                printf("\nNome da loja......: %s", loja.nome_loja[i]);
                printf("\nEndereco......: %s", loja.endereco[i]);
                printf("\nTelefone......: %d", loja.telefone[i]);
                printf("\nPreco.......: %.1f", loja.preco_produto[i]);
                printf("\n---------------------------\n");
            }
        }
    }
}
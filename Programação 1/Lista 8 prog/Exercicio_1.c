#include <stdio.h>
#include <string.h>
#define MAX 500
#define MAX_PRODUTOS 100

int main(){
    system("cls");
    int n=0;
    struct adega {
        int codigo[MAX_PRODUTOS];
        float preco[MAX_PRODUTOS];
        char descricao[MAX_PRODUTOS][MAX+1];
        int alcool[MAX_PRODUTOS];
    };
    struct adega bebida;
    while (1)
    {
       printf("\n---------- MENU -----------\n");
    printf("[1] - Cadastrar produto\n[2] - Pesquisar produto por codigo\n[3] - Exibir valor total dos produtos\n[4] - Sair\n");
    int resposta;
    int respos_alcool;
    scanf("%d", &resposta);
    getchar();
    if (resposta == 1)
    {
        printf("Codigo........: ");
        scanf("%d", &bebida.codigo[n]);
        printf("\nPreco........: ");
        scanf("%f", &bebida.preco[n]);
        getchar();
        printf("\nDescricao.......: ");
        fgets(bebida.descricao[n], MAX+1, stdin);
        printf("\n[1] - Bebida alcoolica\n[2] - Bebida sem alcool\n");
        scanf("%d", &respos_alcool);
        bebida.alcool[n] = respos_alcool;
        n++;
    }
    else if (resposta == 2)
    {
        int respos_codigo=0;
        printf("\nCodigos......: ");
        for (int i = 0; i < n; i++)
        {
            int count=1;
            printf("[%d] - %d ", count, bebida.codigo[i]);
            count++;
        }
        printf("\nInforme o codigo para pesquisa: ");
        scanf("%d", &respos_codigo);
        for (int i = 0; i < n; i++)
        {
            if (respos_codigo == bebida.codigo[i])
            {
                if (bebida.alcool[i] == 1)
                {
                   printf("\nPreco........: %.2f\n\nDescricao......: %s\nAlcool.......: Bebida Alcoolica", bebida.preco[i], bebida.descricao[i]);
                }
                else if (bebida.alcool[i] == 2)
                {
                    printf("\nPreco........: %.2f\n\nDescricao......: %s\nAlcool.......: Bebida Sem Alcool", bebida.preco[i], bebida.descricao[i]);
                }
            }
        }
    }
    else if (resposta == 3)
    {
        float precototal;
        for (int i = 0; i < n; i++)
        {
            precototal += bebida.preco[i];
        }
        printf("Valor total......: %.2f", precototal);
    }
    else if (resposta == 4)
    {
        break;
    }
    }
    getch();
}
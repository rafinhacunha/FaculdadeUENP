#include <stdio.h>
#include <string.h>
#define MAX 500
int main(){
    system("cls");
    struct streaming
    {
        int visu_video[MAX];
        char titulo[MAX][MAX+1];
    };
    struct streaming videos;
    int resposta;
    int count=0;
    while (1)
    {
        printf("\n---------- MENU -----------\n");
        printf("[1] - Cadastrar videos\n[2] - Mostrar videos\n[3] - Pesquisar videos\n[4] - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &resposta);
        if (resposta == 1)
        {
            
            getchar();
            printf("Informe o titulo do video: ");
            fgets(videos.titulo[count], MAX+1, stdin);
            printf("\nInforme o tanto de visualicoes que possue este video: ");
            scanf("%d", &videos.visu_video[count]);
            count++;
        } 
        int counti=count;
        int contador_video = 1;
        if (resposta == 2)
        {
            for (int i = 0; i < counti; i++)
            {
                printf("\n-----Video [%d]-----\n", contador_video);
                printf("Titulo: %s\n", videos.titulo[i]);
                printf("Visualicoes: %d\n", videos.visu_video[i]);
                contador_video++;
            }
        }
        int contador_video2 = 1;
        char comparar_titulo[MAX+1];
        if (resposta == 3)
        {
            getchar();
            printf("Informe o titulo do video: ");
            fgets(comparar_titulo, MAX+1, stdin);
                for (int i = 0; i < count; i++)
                {
                    if (strcmp(comparar_titulo, videos.titulo[i]) == 0)
                    {
                        printf("\n-----Video [%d]-----\n", contador_video2);
                        printf("Titulo: %s\n", videos.titulo[i]);
                        printf("Visualizacoes: %d", videos.visu_video[i]);
                    }
                }
        }
    }
    getch();
}

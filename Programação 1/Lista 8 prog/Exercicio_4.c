#include <stdio.h>
#define MAX 50
int main(){
    struct cadastro
    {
        int matricula[MAX];
        char nome[MAX][50];
        float nota[MAX];
    };
    struct cadastro alunos;
    int resposta;
    int count=0;
    float mediaturma, somaturma;
    float maior = __FLT_MIN__;
    while (1)
    {
        printf("\n----------MENU----------\n");
        printf("[1] - Informar dados do aluno\n[2] - Exibir dados dos alunos\n[3] - Exibir media geral da turma\n[4] - Exibir maior nota da turma\n[5] - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &resposta);
        if (resposta == 1)
        {
            printf("Informe a matricula do aluno: ");
            scanf("%d", &alunos.matricula[count]);
            getchar();
            printf("Informe o nome do aluno: ");
            fgets(alunos.nome[count], 50, stdin);
            printf("Informe a nota deste aluno: ");
            scanf("%f", &alunos.nota[count]);
            count++;
        }
        if (resposta == 2)
    {
        printf("\n------Alunos aprovados------\n");
        for (int i = 0; i < count; i++)
        {
            if (alunos.nota[i] >= 7)
            {
                printf("Matricula: %d", alunos.matricula[i]);
                printf("\nNome: %s", alunos.nome[i]);
                printf("\nNota: %.1f\n", alunos.nota[i]);
            }
        }
        printf("\n------Alunos de EXAME------\n");
        for (int i = 0; i < count; i++)
        {
            if (alunos.nota[i] >= 4 && alunos.nota[i] < 7)
            {
                printf("Matricula: %d", alunos.matricula[i]);
                printf("\nNome: %s", alunos.nome[i]);
                printf("\nNota: %.1f\n", alunos.nota[i]);
            }
        }
        printf("\n------Alunos reprovados------\n");
        for (int i = 0; i < count; i++)
        {
            if (alunos.nota[i] < 4)
            {
                printf("Matricula: %d", alunos.matricula[i]);
                printf("\nNome: %s", alunos.nome[i]);
                printf("\nNota: %.1f\n", alunos.nota[i]);
            }
        }
    }

        if (resposta == 3)
        {
            somaturma = 0;
            for (int i = 0; i < count; i++)
            {
                somaturma += alunos.nota[i];
            }
            mediaturma = somaturma/count;
            printf("\n------Media da turma------\n");
            printf("%.1f", mediaturma);
        }
        if (resposta == 4)
        {
            maior = __FLT_MIN__;
            for (int i = 0; i < count; i++)
            {
                if (maior < alunos.nota[i])
                {
                    maior = alunos.nota[i];
                }
            }
            for (int i = 0; i < count; i++)
            {
                if (alunos.nota[i] == maior)
                {
                    printf("\n------Aluno com maior nota------\n");
                    printf("Matricula: %d", alunos.matricula[i]);
                    printf("\nNome: %s", alunos.nome[i]);
                    printf("\nNota: %.1f", alunos.nota[i]);
                }
            }
        }
        if (resposta == 5)
        {
            printf("Programa encerrado");
            break;
        }
    }
}
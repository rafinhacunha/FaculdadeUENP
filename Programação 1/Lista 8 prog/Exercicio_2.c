#include <stdio.h>
int main(){
    system("cls");
    struct dose
    {
        int dose;
        char data[11];
        char fabricante[50];
    };
    struct pessoa
    {
        char nome[50];
        struct dose doses[4];
        int totalDoses;
    };
    struct pessoa individuo;
    printf("Informe o seu nome: ");
    fgets(individuo.nome, 50, stdin);
    printf("Quantas doses voce ja tomou: ");
    scanf("%d", &individuo.totalDoses);
    if (individuo.totalDoses > 0 && individuo.totalDoses <= 4)
    {
        for (int i = 0; i < individuo.totalDoses; i++)
        {
            printf("Informe qual eh a dose: ");
            scanf("%d", &individuo.doses[i].dose);
            getchar();
            printf("Informe a data da vacinacao (dd/mm/aaaa): ");
            scanf("%s", &individuo.doses[i].data);
            printf("Informe o fabricante dessa vacina: ");
            scanf("%s", &individuo.doses[i].fabricante);
        }
    }
    int resposta;
    while (1)
    {
            printf("\n---------- MENU -----------\n");
            printf("[1] - Registrar uma nova dose de vacina\n[2] - Mostrar doses cadastradas\n[3] - Sair\n");
            scanf("%d", &resposta);
       if (resposta == 1)
    {
        if (individuo.totalDoses == 4)
        {
            printf("Voce ja tomou o numero de doses permitido.");
        }
        else{
            printf("Informe qual eh a dose: ");
            scanf("%d", &individuo.doses[individuo.totalDoses].dose);
            printf("Informe a data da vacinacao: ");
            scanf("%s", individuo.doses[individuo.totalDoses].data);
            getchar();
            printf("Informe o fabricante dessa vacina: ");
            scanf("%s", individuo.doses[individuo.totalDoses].fabricante);
            individuo.totalDoses++;
        }
    }
    if (resposta == 2)
{
    int count=1;
        for (int i = 0; i < individuo.totalDoses; i++)
    {
        
        printf("\n---Registro da dose [%d]---", count);
        printf("\n");
        printf("Numero da dose: %d \n", individuo.doses[i].dose);
        printf("Data de vacinacao: %s \n", individuo.doses[i].data);
        printf("Fabricante: %s", individuo.doses[i].fabricante);
        printf("\n");
        count++;
    }
        printf("------------------");
    }

    if (resposta == 3)
    {
        printf("Programa encerrado");
        break;
    }
    }
      getch();  
}

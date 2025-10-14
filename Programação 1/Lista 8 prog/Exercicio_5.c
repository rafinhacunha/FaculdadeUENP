#include <stdio.h>
#define MAX 500 
void novo_peso(char name[][MAX+1], int age[], float weight[]){
    int age1 = __INT_MAX__;
    float weight1 = __FLT_MIN__;
    int contador=0, contador1=0;
    for (int j = 0; j < 20; j++)
    {
        if (age1 > age[j])
        {
            age1 = age[j];
            contador = j;
        }
        if (weight1 < weight[j])
        {
            weight1 = weight[j];
            contador1 = j;
        }
    }
    printf("Crianca mais nova: %s\nCrianca mais pesada: %s", name[contador], name[contador1]);
}
int main(){
    struct ensinofundamental
    {
        char nome[20][MAX+1];
        int idade[20];
        float altura[20];
        float peso[20];
    };
    struct ensinofundamental criancas;
    int contador=1;
    for (int i = 0; i < 20; i++)
    {
        printf("Registro da crianca [%d]", contador);
        printf("\nInforme o nome da crianca: ");
        fgets(criancas.nome[i], MAX+1, stdin);
        printf("Informe a idade: ");
        scanf("%d", &criancas.idade[i]);
        printf("Informe a altura: ");
        scanf("%f", &criancas.altura[i]);
        printf("Informe o peso: ");
        scanf("%f", &criancas.peso[i]);
        contador++;
        getchar(); 
    }
    novo_peso(criancas.nome, criancas.idade, criancas.peso);
}
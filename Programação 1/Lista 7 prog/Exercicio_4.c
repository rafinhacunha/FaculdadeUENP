// O coordenador do curso deseja saber quantos alunos est ̃ao cursando ao mesmo tempo asdisciplinas de Programa ̧c ̃ao I e Programa ̧c ̃ao II. Fa ̧ca um programa usando ponteiros que leia os c ́odigos de matr ́ıcula dos alunos de ambos os cursos e mostre os c ́odigos de matr ́ıculas dos alunos que est ̃ao cursando ambas as disciplinas.

#include <stdio.h>

void verificarmatricula(int *prog1, int tamanho1, int *prog2, int tamanho2){
    printf("Codigo que faz ambas disciplinas: ");
    for (int i = 0; i < tamanho1; i++)
    {
        for (int j = 0; j < tamanho2; j++)
        {
            if (*(prog1 + i) == *(prog2 + j))
            {
                printf("%d ", *(prog1+i)); 
            }
        }
    }
}

int main(){
    int tamanho1, tamanho2;
    printf("Quantidade de alunos em prog 1: ");
    scanf("%d", &tamanho1);
    printf("Quantidade de alunos em prog 2: ");
    scanf("%d", &tamanho2);
    
    int prog1[tamanho1];
    for (int i = 0; i < tamanho1; i++)
    {
        scanf("%d", &prog1[i]);
    }
    int prog2[tamanho2];
    for (int i = 0; i < tamanho2; i++)
    {
        scanf("%d", &prog2[i]);
    }
    
    verificarmatricula(prog1, tamanho1, prog2, tamanho2);

}
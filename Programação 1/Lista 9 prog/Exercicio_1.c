#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  struct alimento
  {
    char nome[50];
    int calorias;
  };
  struct alimento *cadastro;
  int n;
  printf("\nAlocacao: ");
  scanf("%d", &n);
  getchar();
  cadastro = (struct alimento*)calloc(n, sizeof(struct alimento));
  for (int i = 0; i < n; i++)
  {
    printf("\nDiga o nome do alimento: ");
    fgets(cadastro[i].nome, 50, stdin);
    printf("\nQuantas calorias possui: ");
    scanf("%d", &cadastro[i].calorias);
    getchar();
  }
  int resposta;
  char nomes[50];
  do
  {
    printf("\n[1] - Mostrar alimentos cadastrados\n[2] - Pesquisar por titulos\n[3] - Sair\n");
    scanf("%d", &resposta);
    getchar();
    switch (resposta)
    {
    case 1:
      for (int i = 0; i < n; i++)
      {
        printf("\nNome: %s", cadastro[i].nome);
        printf("\nCalorias: %d", cadastro[i].calorias);
      }
      break;
      case 2:
        printf("\nQual o titulo a ser pesquisado: ");
        fgets(nomes, 50, stdin);
        for (int i = 0; i < n; i++)
        {
          if (strcmp(nomes, cadastro[i].nome) == 0)
          {
            printf("\nNome: %s", cadastro[i].nome);
            printf("\nCalorias: %d", cadastro[i].calorias);
          }
        }
        break;
      case 3:
      printf("Programa Encerrado");
      break;
    default:
    printf("\nResposta invalida");
      break;
    }
  } while (resposta == 3);
  free(cadastro);
}
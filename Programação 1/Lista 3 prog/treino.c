#include<stdio.h>
int main()
{
 float soma=0, total=0;
 float numero;

 printf("\nEntre com um numero: ");
 scanf("%f", &numero);
 while(numero>0)
 {
 soma=soma+numero;
 total++;

 printf("\nEntre com um numero: ");
 scanf("%f", &numero);
 }

 if(total==0)
 printf("\nNao foi entrado nenhum numero");
 else
 if(total==1)
 printf("\nFoi entrado %.0f numero", total);
 else
 printf("\nForam entrados %.0f numeros", total);

 if(total!=0)
 printf("\nA media dos numeros entrados e: %f", soma/total);

 getch();
} 
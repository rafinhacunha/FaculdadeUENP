#include <stdio.h>
float mediaA(float n1, float n2){
    float media;
    media = (n1 + n2)/ 2;
    return media;
}
float mediaP(float n1, float n2){
    float media;
    media = ((n1 * 3)+(n2 * 2)) / 2;
    return media;
}
float mediaH(float n1, float n2){
    float media;
    media = 2 / ((1/n1) + (1/n2));
    return media;
}
int main(){
    float n1, n2, mediaAr, mediaPo, mediaHa;
    char escolha;
    printf("Nota 1 e nota 2: ");
    scanf("%f %f", &n1, &n2);
    printf("Tipo de media: ");
    scanf(" %c", &escolha);
    mediaAr = mediaA(n1, n2);
    mediaPo = mediaP(n1, n2);
    mediaHa = mediaH(n1, n2);
        switch (escolha)
        {
        case 'a':
            printf("%.1f", mediaAr);
            break;
        case 'p':
            printf("%.1f", mediaPo);
            break;
        case 'h':
            printf("%.1f", mediaHa);
            break;
        default:
            printf("INVALIDO");
            break;
        }
}
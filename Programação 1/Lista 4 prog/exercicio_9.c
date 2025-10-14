#include <stdio.h>
    float num(float horas, float minutos, float segundos){
        float seg;
        seg = (horas * 3600) + (minutos * 60) + segundos;
        return seg;
    }
int main(){
    float horas, minutos, segundos;
    float result;
    scanf("%f %f %f", &horas, &minutos, &segundos);
    result = num(horas, minutos, segundos);
    printf("%.1f", result);
}
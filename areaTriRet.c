/*
*Arquivo: areaTriRet.c
*Data criação: 24/nov/22
*Autor: Natan Ferreira
*/

#include <stdio.h>

int main(void){
    float xA, xB, xC, yA, yB, yC, base, altura, area;
    printf("Digite a coordenada de A: ");
    scanf("%f %f", &xA, &yA);
    printf("Digite a coordenada de B: ");
    scanf("%f %f", &xB, &yB);
    yC = yA;
    xC = xB;
    base = xC - xA;
    altura = yB - yA;
    area = ((base * altura)/2);
    printf("a area e: %g", area);
    return 0;
}
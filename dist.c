/*
*Arquivo: dist.c
*Data criação: 24/nov/22
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>
#include <math.h>

int main(void){
    float xA, xB, yA, yB, d;
    printf("Digite a primeira coordenada: ");
    scanf("%f %f", &xA, &yA);
    printf("Digite a segunda coordenada: ");
    scanf("%f %f", &xB, &yB);
    d = sqrt((pow(xA-xB, 2) + pow(yA-yB, 2)));
    printf("%g", d);
    return 0;
}
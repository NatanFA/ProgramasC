/*
*Arquivo: impares.c
*Data criação: 24/nov/22
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>

int main(void){
    int menor, maior, j, i;
    printf("Digite o intervalo que deseja: ");
    scanf("%d %d", &menor, &maior);
    j = menor;
    i = menor;
    while (i <= maior){
        if (i % 2 == 0){
            j++;
            i++;
            continue;
        }else{
            if (j == maior || j == (maior - 1)){
                printf("%d", i);
            }else{
                printf("%d, ", i);
            }
        }
        j++;
        i++;
    }
    return 0;
}
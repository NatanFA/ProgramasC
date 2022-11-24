/*
*Arquivo: dist.c
*Data criação: 24/nov/22
*Autor: Natan Ferreira
*/

#include <stdio.h>

int main(void){
    int menor, maior;
    printf("Digite o intervalo que deseja: ");
    scanf("%d %d", &menor, &maior);
    for (int i = menor; i <= maior; i++){
        if (i % 2 == 0){
            continue;
        }
        else{
            printf("%d, ", i);
        }
    }
    return 0;
}
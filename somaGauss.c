/*
*Arquivo: somaGauss.c
*Data criação: 04/nov/22
*Autor: Natan Ferreira
*Soma de Gauss em C
*Matrícula: 12121EEL016
*/

#include <stdio.h>
int main(void){
    int n, soma, i;
    printf("Digite o numero: ");
    scanf("%d", &n);
    soma = 0;
    i = 1;
    while(i <= n){
        soma = soma + i;
        i = i + 1;
    }
    printf("A soma e: %d", soma);
    return 0;
}
/*
*Arquivo: aritmInt.c
*Data criação: 27/out/22
*Autor: Natan Ferreira
*Meu primeiro programa em C
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
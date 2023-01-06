/*
*Arquivo: fatorial.c
*Data criação: 04/nov/22
*Autor: Natan Ferreira
*Fatorial em C
*Matrícula: 12121EEL016
*/

#include <stdio.h>
#include <stdint.h>

int main(void){
    int n, i;
    int64_t produtorio;
    produtorio = 1;
    i = 1;
    printf("Digite um numero maior que 1: ");
    scanf("%d", &n);
    while (i <= n){
        produtorio = (produtorio * i);
        i = i + 1;
    }
    printf("O fatorial de %d e: %d", n, produtorio);
    return 0;
}
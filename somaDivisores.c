/*
*Arquivo: somaDivisores.c
*Data criação: 04/nov/22
*Autor: Natan Ferreira
*Divisores comuns em C
*/

#include <stdio.h>

int main(void){
    int n, i, soma;
    soma = 0;
    printf("Digite o numero que quer a soma dos divisores: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        if ((n % i) == 0){
            soma = soma + i;
        }else{
            continue;
        }
    }
    printf("%d", soma);
    return 0;
}
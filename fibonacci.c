/*
*Arquivo: imc.c
*Data criação: 04/nov/22
*Autor: Natan Ferreira
*Meu primeiro programa em C
*/

#include <stdio.h>
int main(void){
    printf("Digite quantos numeros da sequencia de fibonacci deseja: ");
    scanf("%d", &n);
    for (int i = 0, j = 1, t = i + j; j < n; i = j; j = t; t = i + j){
        printf("%d", i);
    }
    return 0;
}
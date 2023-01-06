/*
*Arquivo: fib.c
*Data criação: 05/jan/23
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>

int fib(n, m);

int main(void){
    int n;
    n = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    int resultado = fib(n);
    printf("%d", resultado);
}

int fib(n){
    if (n == 0){
        return 0;
    }else if (n == 1 || n == 2){
        return 1;
    }else{
        return ((fib(n-1))+(fib(n-2)));
    }
}
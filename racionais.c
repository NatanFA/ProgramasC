/*
*Arquivo: contaPalavras.c
*Data criação: 11/dez/22
*Autor: Natan Ferreira
*/

#include <stdio.h>

typedef
    struct Racionais{
        int soma, subtracao, divisao, multiplicacao;

    }
Racionais;

int mdc(n, m);

int main(void){
    Racionais Q1;
    Racionais Q2;
    int n, m, n1, resultado;
    n = 0;
    m = 0;
    n1 = 0;
    resultado = 0;
    printf("Digite um numero racional: ");
    scanf("%d", &n);
    scanf("%d", &m);
    n1 = mdc(n, m);
    printf("")
    printf("%d", resultado);
}

int mdc(n, m){
    if (m == 0){
        return n;
    }else{
        return (mdc(m, n % m));
    }
}
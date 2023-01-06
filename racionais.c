/*
*Arquivo: contaPalavras.c
*Data criação: 11/dez/22
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
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
    int n, m, n1, m1, mdc1, mdc2, resultado;
    n = 0;
    m = 0;
    n1 = 0;
    m1 = 0;
    mdc1 = 0;
    mdc2 = 0;
    printf("Digite um numero racional: ");
    scanf("%d", &n);
    scanf("%d", &m);
    printf("Digite outro numero racional: ");
    scanf("%d", &n1);
    scanf("%d", &m1);
    mdc1 = mdc(n, m);
    mdc2 = mdc(n1, m1);
    Q1.soma =
    printf("");
    printf("%d", resultado);
}

int mdc(n, m){
    if (m == 0){
        return n;
    }else{
        return (mdc(m, n % m));
    }
}
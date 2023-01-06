/*
*Arquivo: mdc.c
*Data criação: 05/jan/23
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>

int mdc(n, m);

int main(void){
    int n, m;
    n = 0;
    m = 0;
    printf("Digite dois numeros: ");
    scanf("%d", &n);
    scanf("%d", &m);
    int resultado = mdc(n, m);
    printf("%d", resultado);
    return 0;
}

int mdc(n, m){
    if (m == 0){
        return n;
    }else{
        return (mdc(m, n % m));
    }
}
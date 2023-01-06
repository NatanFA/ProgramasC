/*
*Arquivo: altura.c
*Data criação: 05/jan/23
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>
#include <math.h>

double aprox(n);

int main(void){
    int n;
    double aproxpi;
    printf("Informe o numero que deseja para a serie: ");
    scanf("%d", &n);
    aproxpi = aprox(n);
    printf("%lf", aproxpi);
    return 0;
}

double aprox(n){
    if (n == 0){
        return 4;
    }else{
        return (aprox(n - 1) + (4 * ((pow(-1, n))/((2 * n) + 1))));
    }
}
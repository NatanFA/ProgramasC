/*
*Arquivo: somatorio.c
*Data criação: 24/nov/22
*Autor: Natan Ferreira
*/

#include <stdio.h>

int main(void){
    int x = 12;
    int * p = &x;
    printf("%d\n", *p);
    printf("%p\n", p);
    printf("%p", &x);
    return 0;
}
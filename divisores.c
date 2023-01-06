/*
*Arquivo: divisores.c
*Data criação: 24/nov/22
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>

int main(void){
    printf("Digite o numero: ");
    int n, i;
    i = 1;
    scanf("%d", &n);
    while (i <= n){
        if ((n % i) == 0){
            if (i == n){
                printf("%d", i);
            }else{
                printf("%d, ", i);
            }
        }
        i++;
    }
    return 0;
}

/*
*Arquivo: aritmInt.c
*Data criação: 27/out/22
*Autor: Natan Ferreira
*Meu primeiro programa em C
*/
#include <stdio.h>
int main(void){
    int a, b;
    printf("Digite o número: ");
    scanf("%d", &a);
    printf("Digite o número: ");
    scanf("%d", &b);
    printf("%d + %d = %d \n", a, b, a + b);
    printf("%d - %d = %d \n", a, b, a - b);
    printf("%d * %d = %d \n", a, b, a * b);
    printf("%d / %d = %d \n", a, b, a / b);
    printf("%d %% %d = %d \n", a, b, a % b);

    return 0;
}
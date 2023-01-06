/*
*Arquivo: fibonacci.c
*Data criação: 04/nov/22
*Autor: Natan Ferreira
*Fibonacci em C
*Matrícula: 12121EEL016
*/

#include <stdio.h>
int main(void){
    int a;
    printf("Digite quantos numeros da sequencia de fibonacci deseja: ");
    scanf("%d", &a);
    for (int i = 0, j = 0, k = 1, z; i < a; i++, z = j+k, j = k, k = z) printf("%d\n", j);
    return 0;
}
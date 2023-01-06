/*
*Arquivo: somaSeqHailst.c
*Data criação: 24/nov/22
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>

int main(void){
    int n, seq, soma;
    printf("Digite o numero que deseja aplicar na sequencia: ");
    scanf("%d", &n);
    seq = n;
    soma = n;
    while (soma != 1){
        if ((soma % 2) == 0){
            soma = (soma/2);
            seq = seq + soma;
        }else{
            soma = (3*soma) + 1;
            seq = seq + soma;
        }
    }
    printf("%d", seq);
    return 0;
}
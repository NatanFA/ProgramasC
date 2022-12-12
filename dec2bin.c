/*
*Arquivo: dec2bin.c
*Data criação: 11/dez/22
*Autor: Natan Ferreira
*/

#include <stdio.h>

void convertbin(int n);

int main(void){ ;
    printf("Digite um numero: ");
    int n;
    scanf("%d", &n);
    convertbin(n);
    return 0;
}

void convertbin(int n){
    int vetor[64];
    int i, j;
    i = 0;
    j = 0;
    while ((n / 2) > 0){
        vetor[i] = (n % 2);
        n = (n / 2);
        j++;
        i++;
    }
    if((n / 2) == 0){
        vetor[i] = 1;
        j++;
    }
    for(int k = j - 1; k >= 0; k--){
        printf("%d", vetor[k]);
    }
}
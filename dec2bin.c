/*
*Arquivo: dec2bin.c
*Data criação: 11/dez/22
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>

void convertbin(long long int n);

int main(void){ ;
    printf("Digite um numero: ");
    long long int n;
    scanf("%llu", &n);
    convertbin(n);
    return 0;
}

void convertbin(long long int n){
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
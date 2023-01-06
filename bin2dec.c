/*
*Arquivo: bin2dec.c
*Data criação: 11/dez/22
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 1024

void getstr(char * str, int nchar);

int main(void){
    char vet[N];
    long long unsigned int len = 0;
    long long unsigned int soma = 0;
    printf("Digite um numero em binario: ");
    getstr(vet, N);
    len = strlen(vet);
    long int k = 0;
    while(len--){
        if(vet[len] == '0' || vet[len] == '1'){
            soma = soma + pow(2,k) * (vet[len] - '0');
            k++;
        }
    }
    printf("%llu", soma);
    return 0;
}

void getstr(char * str, int nchar) {
    char c;  int i;
    int j = 0;
    for(i = 0; i < nchar; i++) {
        c = getchar();
        if(c != '\n') {
            str[i] = c;
            j++;
        } else {
            str[i] = '\0';
            break;
        }
    }
    if(i == nchar) {
        str[nchar-1] = '\0';
        // limpar buffer teclado
        while ((c = getchar()) != '\n' && c != EOF);
    } 
}
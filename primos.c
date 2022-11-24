/*
*Arquivo: dist.c
*Data criação: 24/nov/22
*Autor: Natan Ferreira
*/

#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n);

int main(void){
    int n;
    printf("Entre com um numero: ");
    scanf("%d", &n);
    printf("O numero %d ", n);
    if(ehPrimo(n)){
        printf("e primo!\n");
    }
    else{
        printf("Nao e primo!\n");
    }
    return 0;
}

bool ehPrimo(int n) {
    for (int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
    }


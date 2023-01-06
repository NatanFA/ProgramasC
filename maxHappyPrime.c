/*
*Arquivo: maxHappyPrime.c
*Data criação: 24/nov/22
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool ehPrimo(n);

bool ehFeliz(int n1);

int main(void){
    int n, primo, feliz;
    printf("Digite o numero: ");
    scanf("%d", &n);
    while (n != 0){
        primo = 0;
        feliz = 0;
        primo = ehPrimo(n);
        feliz = ehFeliz(n);
        if (primo && feliz){
            printf("%d", n);
            n = 0;
        }else{
            n = n - 1;
            if (n == 0){
                printf("%d***", n);
            }
        }
    }
    return 0;
}

bool ehPrimo(n){
    if (n == 1){
        return false;
    }
    for (int i = 2; i < n; i++){
        if ((n % i) == 0){
            return false;
        }
    }
    return true;
}

bool ehFeliz(int n1){
    int digito;
    int soma;
    soma = 0;
    while (n1 > 0){
        digito = (n1 % 10);
        soma = soma + pow(digito,2);
        n1 = n1/10;
    }
    if (soma == 4){
        return false;
    }else if (soma != 1){
        return ehFeliz(soma);
    }else{
        return true;
    }
}
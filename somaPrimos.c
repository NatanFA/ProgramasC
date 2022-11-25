/*
*Arquivo: somaPrimos.c
*Data criação: 24/nov/22
*Autor: Natan Ferreira
*/

#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(i);

int main(void){
    int menor, maior, somaPrimos;
    somaPrimos = 0;
    printf("Digite um intervalo no modelo: a b, sendo a < b\n");
    scanf("%d %d", &menor, &maior);
    for(int i = menor; i <= maior; i++){
        if (ehPrimo(i)){
            somaPrimos = somaPrimos + i;
        }else{
            continue;
        }
    }
    printf("%d", somaPrimos);
    return 0;
}

bool ehPrimo(i){
    if(i == 1){
        return false;
    }else{
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                return false;
            }
        }  
    return true;
    }
}
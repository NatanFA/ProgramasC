/*
*Arquivo: remNegativos.c
*Data criação: 01/dez/22
*Autor: Natan Ferreira
*/

#include <stdio.h>

void removeN(int * vetor, int tamanho);

int main(void){
    int n;
    printf("Quantos elementos? ");
    scanf("%d",&n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        printf("Informe o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    removeN(vetor, n);
    return 0;
}

void removeN(int * vetor, int tamanho){
    int d = 0;
    for(int j = 0; j < tamanho; j++){
        if(vetor[j] >= 0){
            printf("%d ", vetor[j]);
        }else{
            d++;
        }
    }
    if(d == tamanho){
        printf("vazio");
    }
}
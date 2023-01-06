/*
*Arquivo: produtorio.c
*Data criação: 01/dez/22
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>

void produtorio(float * vetor, int tamanho);

int main(void){
    int n;
    printf("Digite a quantidade de numeros que deseja digitar: ");
    scanf("%d", &n);
    float vetor[n];
    for(int i = 0; i < n; i++){
        printf("Informe o elemento %d: ", i+1);
        scanf("%f", &vetor[i]);
    }
    produtorio(vetor, n);
    return 0;
}

void produtorio(float * vetor, int tamanho){
    float produto;
    int z;
    produto = 1;
    z = 1;
    for(int j = 0; j < tamanho; j++){
        if(z == tamanho){
            printf("%g = ", vetor[j]);
        }else{
            printf("%g * ", vetor[j]);
        }
        produto = produto * vetor[j];
        z++;
    }
    printf("%g", produto);
}

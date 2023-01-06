/*
*Arquivo: minMax.c
*Data criação: 01/dez/22
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>

void minMax(int * vetor, int tamanho);

int main(void){
    int n;
    printf("Quantos elementos? ");
    scanf("%d",&n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        printf("Informe o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    minMax(vetor, n);
    return 0;

}

void minMax(int * vetor, int tamanho){
    int me = vetor[0];
    int ma = vetor[0];
    for(int z = 0; z < tamanho; z++){
        if(vetor[z] < me)
            me = vetor[z];
        if(vetor[z] > ma)
            ma = vetor[z];
    }

    for(int j = 0; j < tamanho; j++){
        printf("%d", vetor[j]);
        if(vetor[j] == me)
            printf("<");
        if(vetor[j] == ma)
            printf(">");
        printf(" ");
    }
    printf("\n");
}
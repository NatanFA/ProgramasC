/*
*Arquivo: golomb.c
*Data criação: 12/jan/23
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>
#include <stdlib.h>

typedef
    long long unsigned int
lluint;

void golomb(lluint * vetor, int a, int b);
void media(lluint * vetor, int a, int b);

int main(void){
    int a, b;
    lluint * vetor;
    printf("Digite o numero que deseja iniciar a sequencia de golomb: ");
    scanf("%d", &a);
    printf("Digite o indice b: ");
    scanf("%d", &b);
    vetor = (lluint *) malloc((b + 1) * sizeof(lluint));
    golomb(vetor, a, b);
    printf("primeiro: %d\n", vetor[a]);
    printf("ultimo: %d\n", vetor[b]);
    media(vetor, a, b);
    free(vetor);
    return 0;
}

void golomb(lluint * vetor, int a, int b){
    for (int i = 0; i < (b + 1); i++){
        if (i == 0){
            vetor[i] = 1;
        }else{
            vetor[i] = 1 + vetor[i - vetor[vetor[i - 1] - 1]];
        }
    }
}

void media(lluint * vetor, int a, int b){
    int j = 0;
    int k = 0;
    for (int i = a; i < (b + 1); i++){
        j += vetor[i];
        k++;
    }
    printf("media: %lg", (double) j/k);
}

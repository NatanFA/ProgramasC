/*
*Arquivo: quaisDiv.c
*Data criação: 01/dez/22
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

void identifica_divisores(int * vetor, int tamanho, int ref);

#include <stdio.h>
int main(void){
    int n, ref;
    printf("Quantos elementos? ");
    scanf("%d",&n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        printf("Informe o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Escolha o numero de referencia: ");
    scanf("%d",&ref);
    identifica_divisores(vetor, n, ref);
    return 0;
}

void identifica_divisores(int * vetor, int tamanho, int referencia){
    for(int i = 0; i < tamanho; i++){
        printf("%d", vetor[i]);
        if(referencia % vetor[i] == 0){
            printf("#");
        }
        printf(" ");
    }
    printf("\n");
}

/*
*Arquivo: muSigma.c
*Data criação: 02/dez/22
*Autor: Natan Ferreira
*/

#include <stdio.h>
#include <math.h>

float media(float * vetor, int tamanho);
void desviopad(float * vetor, float resmedia, int tamanho);

int main(void){
    int n;
    float resmedia;
    printf("Quantos numeros voce pretende digitar? ");
    scanf("%d", &n);
    float vetor[n];
    for(int i = 0; i < n; i++){
        printf("Digite o elemento numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    resmedia = media(vetor, n);
    desviopad(vetor, resmedia, n);
    return 0;
}

float media(float * vetor, int tamanho){
    float soma, res;
    for(int j = 0; j < tamanho; j++){
        soma += vetor[j];
    }
    res = soma/tamanho;
    printf("media %g, ", res);
    return res;
}

void desviopad(float * vetor, float resmedia, int tamanho){
    float somaquad = 0;
    float desvio;
    for(int k = 0; k < tamanho; k++){
        somaquad += (pow((resmedia - vetor[k]),2));
    }
    desvio = sqrt(somaquad/tamanho);
    printf("desvio %g", desvio);
}
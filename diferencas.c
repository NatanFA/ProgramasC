/*
*Arquivo: diferencas.c
*Data criação: 02/dez/22
*Autor: Natan Ferreira
*/

#include <stdio.h>

float calcadj(float * vetor, int tamanho);

int main(void){
    int n;
    printf("Quantos numeros voce pretende digitar? ");
    scanf("%d", &n);
    float vetor[n];
    for(int i = 0; i < n; i++){
        printf("Digite o elemento numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    float vetor2 = calcadj(vetor, n);
    return 0;
}

float calcadj(float * vetor, int tamanho){
    float vetor2[tamanho-1];
    for(int j = 0; j < (tamanho - 1); j++){
        vetor2[j] = vetor[j] - vetor[j + 1];
    }
    int d = 1;
    for(int k = 0; k < (tamanho - 1); k++){
        if(d == (tamanho - 1)){
            printf("%g ", vetor2[k]);
        }else{
        printf("%g, ", vetor2[k]);
        }
        d++;
    }
    float maior = vetor2[0];
    float menor = vetor2[0];
    for(int l = 0; l < (tamanho - 1); l++){
        if(vetor2[l] < menor){
            menor = vetor2[l];
        }
        if(vetor2[l] > maior){
            maior = vetor2[l];
        }
    }        
    printf("min %g max %g", menor, maior);
}
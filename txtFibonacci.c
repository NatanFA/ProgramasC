/*
*Arquivo: txtFibonacci.c
*Data criação: 20/jan/23
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>
#include <stdlib.h>

typedef
    long long unsigned int
lluint;

void fib(lluint * vetor, int i);

int main(void){
    int n;
    lluint * vetor;
    vetor = (lluint *) malloc(n * sizeof(lluint));
    printf("Quantos numeros da sequencia de fibonacci deseja imprimir? (de 1 a 94)\n");
    scanf("%d%*c", &n); 
    FILE * fibo;
    fibo = fopen("fibo.txt", "w");
    if(fibo == NULL){
    printf("Erro na abertura do arquivo!");
    return 1;
    }else{
        int i;
        for (int i = 0; i < n; i++){
            fib(vetor, i);
            fprintf(fibo, "%llu\n", vetor[i]);
            if(i == (n - 1)){
                printf("%llu\n", vetor[i]);
            }
        }
    }
    free(vetor);
    fclose(fibo);
    return 0;
}

void fib(lluint * vetor, int n){
    if (n == 0){
        vetor[n] = 0;
    }else if(n == 1){
        vetor[n] = 1;
    }else{
        vetor[n] = vetor[n - 1] + vetor[n - 2]; 
    }
    }
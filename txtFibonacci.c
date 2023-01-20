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

lluint fib(int n);

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
        for (int i = 0; i < n; i++){
            vetor[i] = fib(i);
            fprintf(fibo, "%llu\n", vetor[i]);
        }
    }
    free(vetor);
    fclose(fibo);
    return 0;
}

lluint fib(int n){
    if (n == 0){
        return 0;
    }else if (n == 1){
        return 1;
    }else{
        return (fib(n - 1) + fib(n - 2));
    }
}
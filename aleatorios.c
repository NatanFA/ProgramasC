/*
*Arquivo: aleatorios.c
*Data criação: 12/jan/23
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int min(int * vetor, int n);
int max(int * vetor, int n);
int media(int * vetor, int n);

int main(void){
    int n; int mini, maxi;
    double med = 0;
    printf("Digite o numero de elementos que deseja no seu vetor: ");
    scanf("%d%*c", &n);
    int * vetor;
    vetor = (int *) malloc(n * sizeof(int));
    srand(n);
    for(int i = 0; i < n; i++){
        vetor[i] = rand() % n;
    }
    mini = min(vetor, n);
    maxi = max(vetor, n);
    med = media(vetor, n);
    printf("minimo: %d\nmaximo: %d\nmedia: %lg\n", mini, maxi, med/n);
    free(vetor);
    return 0;
}

int min(int * vetor, int n){
    int min = vetor[0];
    for(int i = 0; i < n; i++){
        if(vetor[i] < min){
            min = vetor[i];
        }
    }
    return min;
}

int max(int * vetor, int n){
    int max = vetor[0];
    for(int i = 0; i < n; i++){
        if(vetor[i] > max){
            max = vetor[i];
        }
    }
    return max;
}

int media(int * vetor, int n){
    int j = vetor[0];
    for(int i = 0; i < n; i++){
        j += vetor[i];
    }
    return j;
}
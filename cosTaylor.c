/*
*Arquivo: cosTaylor.c
*Data criação: 04/nov/22
*Autor: Natan Ferreira
*Método de Taylor em C
*/

#include <stdio.h>
#include <math.h>

#ifdef M_PI
  #undef M_PI
#endif
#define M_PI 3.141592653589793115997963468544185161590576171875

int fatorial(i);

int main(void){
    int n, i;
    float x, cos;
    cos = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    x = x * M_PI;
    for (i = 0; i <= n; i++){
        cos = cos + ((pow(-1, i))*(((pow(x, (2*i))))/(fatorial(i))));
    }
    printf("%0.5f", cos);
    return 0;
}

int fatorial(i){
    int a, b, produtorio;
    produtorio = 1;
    a = 2*i;
    b = 1;
   while (b <= a){
        produtorio = (produtorio * b);
        b = b + 1;
    }
    return produtorio;

}
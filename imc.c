/*
*Arquivo: imc.c
*Data criação: 04/nov/22
*Autor: Natan Ferreira
*Meu primeiro programa em C
*/

#include <stdio.h>

int main(void){
    float p, a, imc;
    char resultado;
    printf("Digite seu peso: ");
    scanf("%f", &p);
    printf("Digite sua altura: ");
    scanf("%f", &a);
    imc = (p/(a*a));
    if (imc >= 0 && imc < 16){
        printf("%0.2f (Perigo de vida)", imc);
    }if (imc >= 16 && imc < 17){
        printf("%0.2f (Muito abaixo do peso)", imc);
    }if (imc >= 17 && imc < 18.5){
        printf("%0.2f (Abaixo do peso)", imc);
    }if (imc >= 18.5 && imc < 25){
        printf("%0.2f (Peso normal)", imc);
    }if (imc >= 25 && imc <30){
        printf("%0.2f (Acima do peso)", imc);
    }if (imc >= 30 && imc < 35){
        printf("%0.2f (Obesidade grau I)", imc);
    }if (imc >= 35 && imc < 40){
        printf("%0.2f (Obesidade grau II)", imc);
    }if (imc >= 40){
        printf("%0.2f (Obesidade grau III)", imc);
    }
    return 0;
}
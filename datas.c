/*
*Arquivo: altura.c
*Data criação: 05/jan/23
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>
#include <string.h>

typedef
    struct Data {
        int dia, mes, ano;
    }
Data;

const char strmes[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
    "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};

int main(void){
    Data data;
    printf("Digite uma data no seguinte formato: D/M/YYYY (Dia/Mes/Ano sem zeros a esquerda)\n");
    scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);
    printf("%02d.%02d.%02d", data.dia, data.mes, data.ano);
    printf(" ");
    printf("%02d-%02d-%02d", data.mes, data.dia, data.ano);
    printf(" ");
    printf("%02d/%02d/%02d", data.dia, data.mes, data.ano%100);
    printf(" ");
    printf("%02d%s%02d", data.dia, strmes[data.mes], data.ano);
    return 0;
}
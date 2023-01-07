/*
*Arquivo: cadastro.c
*Data criação: 05/jan/23
*Autor: Natan Ferreira
*Matrícula: 12121EEL016
*/

#include <stdio.h>

typedef
    struct Cadastro{
        char primeiro[12];
        char segundo[12];  
}
Cadastro;

typedef 
    struct Data{
        int dia, mes, ano;
}
Data;

typedef
    struct Comprimento{
        int metros, centimetros;
}
Comprimento;

const char strmes[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
    "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};

int main(void){
    Cadastro nome;
    Data data;
    Comprimento altura;
    int n;
    printf("Quantas pessoas pretende cadastrar? ");
    scanf("%d", &n);
    int i = 0;
    float peso = 0;
    while (i != n){
        scanf("%s %s %d/%d/%d %d.%d %f", &nome.primeiro, &nome.segundo, &data.dia, &data.mes, &data.ano, &altura.metros, &altura.centimetros, &peso);
        altura.centimetros = cm(altura.centimetros);
        printf("%s %s; %02d%s%02d; %dm%d; %0.1fkg", &nome.primeiro, &nome.segundo, data.dia, strmes[data.mes], data.ano, altura.metros, altura.centimetros, peso);
        printf("\n");
        i++;
    }
    return 0;
}

int cm(int x) {
    if(x < 10) return x*10;
    if(x > 99) return cm(x/10);
    return x;
}


    
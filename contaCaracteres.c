/*
*Arquivo: contaCaracteres.c
*Data criação: 11/dez/22
*Autor: Natan Ferreira
*/

#include <stdio.h>
#define N 600

int getstr(char * str, int nchar);
void contaalgo(char * str, int nchar);

int main(void){ 
    char s[N];
    printf("Digite uma frase: ");
    for (int i = 0; i < 600; i++){
        s[i] = '\0';
    }
    int j = getstr(s, N);
    contaalgo(s, j);
    return 0;
}

int getstr(char * str, int nchar) {
    char c;  int i;
    int j = 0;
    for(i = 0; i < nchar; i++) {
        c = getchar();
        if(c != '\n') {
            str[i] = c;
            j++;
        } else {
            str[i] = '\0';
            break;
        }
    }
    if(i == nchar) {
        str[nchar-1] = '\0';
        // limpar buffer teclado
        while ((c = getchar()) != '\n' && c != EOF);
    }
    return j;
}

void contaalgo(char * str, int nchar){
    int caracter, digito, outro;
    caracter = 0;
    digito = 0;
    outro = 0;
    for(int k = 0; k < nchar; k++){
        if(((str[k] >= 'A') && (str[k] <= 'Z')) || ((str[k] >= 'a') && (str[k] <= 'z'))){
           caracter++; 
        }
        else if((str[k] >= '0') && (str[k] <= '9')){
            digito++;
        }
        else{
            outro++;
        }
    }
    printf("letras: %d digitos: %d outros: %d", caracter, digito, outro);
}
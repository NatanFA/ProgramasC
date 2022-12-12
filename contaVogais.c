/*
*Arquivo: contaVogais.c
*Data criação: 11/dez/22
*Autor: Natan Ferreira
*/

#include <stdio.h>
#define N 1024

void getstr(char * str, int nchar);

int main(void){ 
    char s[N];
    printf("Digite uma palavra: ");
    getstr(s, N);
    return 0;
}

void getstr(char * str, int nchar) {
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
    int g = 0;
    for(int k = 0; k < j; k++){
        if((str[k] == 'A') || (str[k] == 'E') || (str[k] == 'I') || (str[k] == 'O') || (str[k] == 'U') || (str[k] == 'a') || (str[k] == 'e') || (str[k] == 'i') || (str[k] == 'o') || (str[k] == 'u')){
        g++;
        }
    }
    printf("%d", g);
}
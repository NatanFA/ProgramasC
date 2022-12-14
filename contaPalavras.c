/*
*Arquivo: contaPalavras.c
*Data criação: 11/dez/22
*Autor: Natan Ferreira
*/

#include <stdio.h>
#include <string.h>
#define N 600

int getstr(char * str, int nchar);
void contapalavras(char * str, int nchar);

int main(void){ 
    char s[N];
    printf("Digite uma frase: ");
    for (int i = 0; i < 600; i++){
        s[i] = '\0';
    }
    int j = getstr(s, N);
    contapalavras(s, j);
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

void contapalavras(char * str, int nchar){
    int a = 0;
    int i = 0;
    for(int i = 0; i < nchar; i++){
        while(((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= '0') && (str[i] <= '9')) || (str[i] == '-')){
            i++;
            continue;
        }
        if((str[i] == ' ') && (((str[i + 1] >= 'A') && (str[i + 1] <= 'Z')) || ((str[i + 1] >= 'a') && (str[i + 1] <= 'z')) || ((str[i + 1] >= '0') && (str[i + 1] <= '9')) || (str[i + 1] == '-'))){
            a++;
            i++;
        }
    }
    if(a != 0){
        a++;
    }
    printf("%d", a);
}
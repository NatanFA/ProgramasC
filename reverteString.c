/*
*Arquivo: contaVogais.c
*Data criação: 11/dez/22
*Autor: Natan Ferreira
*/

#include <stdio.h>
#define N 1024

int getstr(char * str, int nchar);
void upper(char * str);
void invertestring(char * str, int nchar, int j);

int main(void){ 
    char s[N];
    printf("Digite uma palavra: ");
    int j = getstr(s, N);
    upper(s);
    invertestring(s, N, j);
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

void upper(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -= 'a' - 'A';
        l++;
    }
}

void invertestring(char * str, int nchar, int j){
    for(int i = j; i >=0; i--){
        printf("%c", str[i]);
    }
}
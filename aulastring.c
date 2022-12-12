#include <stdio.h>
#define N 1024

void getstr(char * str, int nchar);
long long int len(char * str);
void upper(char * str);
void lower(char * str);

int main(void) {    
    char s[N];
    printf("Escreva uma mensagem: ");
    getstr(s, N);
    lower(s);
    printf("Você entrou com %d caracteres:\n%s\n", len(s), s);
    return 0;
}

void getstr(char * str, int nchar) {
    char c;  int i;
    for(i = 0; i < nchar; i++) {
        c = getchar();
        if(c != '\n') {
            str[i] = c;
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
}

long long int len(char * str) {
    long long int l = 0;
    while(str[l]) l++;
    return l;
}

void upper(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -= 'a' - 'A';
        l++;
    }
}

void lower(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'A' && str[l] <= 'Z')
            str[l] -= 'A' - 'a';
        l++;
    }
}
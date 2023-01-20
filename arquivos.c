#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE * pont_arq;
    char palavra[20];
    pont_arq = fopen("arquivo_palavra.txt", "w");
    if(pont_arq = NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    printf("Escreva uma palavra para testar a gravacao de arquivo: ");
    scanf("%s", palavra);
    fprintf(pont_arq, "%s", palavra);
    fclose(pont_arq);
    printf("Dados gravados com sucesso!");
    return 0;
}

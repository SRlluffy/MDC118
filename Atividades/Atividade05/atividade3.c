#include <stdio.h>
#include <string.h>

int main(){

    char sequencia[80];
    int tamanho, joao;

    printf("Sequencia de no maximo 80 caracteres:\n\n");
    scanf("%[^\n]s",sequencia);

    tamanho=strlen(sequencia);

    printf("%d\n", tamanho);

    for(joao=tamanho;joao>-1;joao--){
        printf("%c\n", sequencia[joao]);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){

    int segundos, hora, minutos, s, sobra;

    printf("escreva a quantidade de segundos:\n");
    scanf("%d", &segundos);
    // 3672 segundos
    hora = segundos / 3600;
    sobra = segundos % 3600;
    minutos = sobra / 60;
    s = sobra % 60;

    printf("o resultado foi: %d:%d:%d\n",hora ,minutos, s);    

    return 0;
}
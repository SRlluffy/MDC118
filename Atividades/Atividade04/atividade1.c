#include <stdio.h>

int main(){

    int numero, inteiro_menor, i;

    printf("Entre com 1 numero inteiro\n");
    scanf("%i", &numero);

    inteiro_menor=numero;

    for(i=1;i<2;i++){
        printf("entre com o %d numero inteiro\n",i+1);
        scanf("%i", &numero);

        if(numero<inteiro_menor){
            inteiro_menor=numero;
        }
    }
    
    printf("O menor numero entrado é: %d\n",inteiro_menor);


    return 0;
}
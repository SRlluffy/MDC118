#include <stdio.h>

int main(){

    int numero = 0, i, j = 1, p = 1, f = 0;
    float total = 0;
    while (numero <= 0){
        scanf("%d", &numero);
    }
    for (i = 0; i < numero; i++){
        if (i == 0){
            printf("0, ");
        }
        else if (i == 1 || i == 2){
            printf("1, ");
            total = total + 1;
        }
        else{
            f = p + j;
            p = j;
            j = f;
            printf("%i, ", f);
            total = total + j;
        }
    }
    printf("\nA media eh: %.2f", total / i);
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int auxiliar =1 ;
    
    while( auxiliar ) {
        printf("Digite um número qualquer!!");
        scanf("%d", &auxiliar);
        
        if (auxiliar) {
            for (i=auxiliar;i>=0;i--){
              printf("%i\n",i);
            };
        }
        else {
             printf(" \n");
        }
    }
    return 0;
}
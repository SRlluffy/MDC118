#include <stdio.h>

int main(){

int a, verdadeiro, falso, bissexto;
printf("Escreva um Ano para saber se e bissexto ou nao !!!\n");
scanf("%d", &a);

if(a%400==0){
    bissexto=verdadeiro;
}else if ((a % 4 == 0) && (a % 100 != 0)){
    bissexto=verdadeiro;
}else{
    bissexto=falso;
}

if(bissexto==verdadeiro){
    printf("Ano bissexto !!\n");
}else{
    printf("Ano nao bissexto !!\n");
}

    return 0;
}


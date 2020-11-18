#include <stdio.h>

const int janeiro = 1;
const int fevereiro = 2;
const int marco = 3;
const int abril = 4;
const int maio = 5;
const int junho = 6;
const int julho = 7;
const int agosto = 8;
const int setembro = 9;
const int outubro = 10;
const int novembro = 11;
const int dezembro = 12;

enum meses {jan,fev,mar,abr,mai,jun,jul,ago,set,out,nov,dez};

int main(){
    
    int mes_do_ano;
    scanf("%d", &mes_do_ano);

    if(mes_do_ano==jan){
        printf("mes nao existente!!\n");
    }

    return 0;
}
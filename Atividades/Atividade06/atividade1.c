#include <stdio.h>


int main()
{

    int dia, mes, ano, inv;
 
    char data[9] = {'\0'};

    printf("Entre com a data (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("\n\n");

    printf("Formato BR %d,%d,%d \n",dia,mes,ano);    
    printf("Formato UR %d,%d,%d \n",mes,dia,ano);

    return 0;
}
#include <stdio.h>

int main()
{

    int numero;

    printf("Escreva um numero:\n");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("Esse numero é PAR !!\n");
    }
    else
    {
        printf("Esse numero é IMPAR !!\n");
    }

    return 0;
}
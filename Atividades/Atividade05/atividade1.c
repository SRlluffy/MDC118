#include <stdio.h>
int main()
{
    int numero, j, maior_valor, menor_valor;

    printf("Entre com o 1 numero inteiro: ");
    scanf("%i", &numero);

    maior_valor = numero;
    menor_valor = numero;

    for (j = 1; j < 10; j++)
    {
        printf("\nEntre com o %d numero inteiro: ", j + 1);
        scanf("%i", &numero);

        if (numero > maior_valor)
            maior_valor = numero;
        else if (numero < menor_valor)
            menor_valor = numero;
    }

    printf("\nO menor numero entrado é: %d\n", menor_valor);
    printf("\nO maior numero entrado é: %d\n", maior_valor);

    return 0;
}
#include <stdio.h>

int main()
{
    char caract;
    printf("digite qualquer caractere:\n");
    scanf("%c", &caract);

    if ((caract >= 'a' && caract <= 'z') || (caract >= 'A' && caract <= 'Z'))
    {
        printf("'%c' e um letra\n", caract);
    }
    else if (caract >= '0' && caract <= '9')
    {
        printf("'%c' e um digito\n", caract);
    }
    else
    {
        printf("'%c' e um caractere especial\n", caract);
    }

    return 0;
}
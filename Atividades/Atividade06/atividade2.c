#include <stdio.h>

struct contt
{
    char nome[30];
    long int telefone;
} defcontato;
int main()
{
    struct contt defcontato[10];

    for (int j = 0; j <= 3; j++)
    {
        printf("Coloque o nome:\n");
        scanf("%s", defcontato[j].nome);
        printf("Coloque o telefone\n");
        scanf("%li", &defcontato[j].telefone);
        if (j == 3)
        {
            printf("    Lista de Contatos    \n");

            for (int p = 0; p <= 3; p++)
            {
                printf("%s  -  %li\n", defcontato[j].nome, defcontato[j].telefone);
            }
        }
    }
}
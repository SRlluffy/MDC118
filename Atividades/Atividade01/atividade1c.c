#include <stdio.h>
#define PI 3.14159

int main()
{
    float raio, perimetro;
    scanf("%f", &raio);
    perimetro = 2 * PI * raio;
    printf("%8.4f\n", perimetro);
    return 0;
}
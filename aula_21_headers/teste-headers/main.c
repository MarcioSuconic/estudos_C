#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main()
{
    printf("Hello world!\n");
    printf("Valor da constante PI: %f\n",_PI);

    int y = 5;
    int quad = quadrado(y);
    int cub = cubo(y);

    printf("Quadrado de %d: %d\n", y, quad);
    printf("Cubo de %d: %d\n", y, cub);

    system("pause");
    return 0;
}

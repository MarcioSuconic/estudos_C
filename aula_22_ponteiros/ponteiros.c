#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"");

    // PONTEIRO indica o endere�o de mem�ria
    // o operador & � o operador de endere�o, permite retornar o endere�o de mem�ria.

    int *x, valor, y; // * na frente � um ponteiro --> x, as demais n�o s�o um ponteiro
    valor = 35;

    // int tem 4 bytes ou 32 bits, por isso dar� a diferen�a de 4 bytes entre um endere�o e outro

    x = &valor;
    y = *x;

    printf("Endere�o da vari�vel comum valor �: %p\n", &valor);
    printf("Lendo o conte�do do ponteiro x: %p\n", x);
    printf("endere�o da vari�vel ponteiro x: %p\n", &x);
    printf("Conte�do da vari�vel apontada por x: %d\n", *x);
    printf("Conte�do da vari�vel comum y: %d\n", y);

}

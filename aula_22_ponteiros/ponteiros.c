#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"");

    // PONTEIRO indica o endereço de memória
    // o operador & é o operador de endereço, permite retornar o endereço de memória.

    int *x, valor, y; // * na frente é um ponteiro --> x, as demais não são um ponteiro
    valor = 35;

    // int tem 4 bytes ou 32 bits, por isso dará a diferença de 4 bytes entre um endereço e outro

    x = &valor;
    y = *x;

    printf("Endereço da variável comum valor é: %p\n", &valor);
    printf("Lendo o conteúdo do ponteiro x: %p\n", x);
    printf("endereço da variável ponteiro x: %p\n", &x);
    printf("Conteúdo da variável apontada por x: %d\n", *x);
    printf("Conteúdo da variável comum y: %d\n", y);

}

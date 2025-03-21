// ESPECIFICADORES DE CONVERSÃO

// d,i - numero inteiro decimal com sinal (i diferente no scanf)
// o - numero inteiro octal com sinal
// u - inteiro decimmal sem sinal
// x ou X - inteiro hexadecimal sem sinal
// h ou l - antes do valor inteiro para especificar se short (h) ou long (l)
// f - mostra valor de ponto flutuante
// e ou E - MOstra valor de ponto flutuante em notação exponencial
// L - colocado antes de um especificador de ponto flutuante para indicar valor long double
// c - imprimir caracteres individuais
// s - imprimir cadeia de caracteres (string - ponteiro para char)

// deve vir entre aspas duplas

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    a = 12;
    b = 30;

    printf("O valor de a eh: %d \n", a);
    printf("O valor de a eh: %d e de b eh %d \n", a, b);
}



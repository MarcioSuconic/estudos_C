#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"");

    int a = 40;
    int *ponteiro_1;
    int **ponteiro_2;
    int ***ponteiro_3;

    ponteiro_1 = &a;
    ponteiro_2 = &ponteiro_1; // aponta para o ponteiro 1
    ponteiro_3 = &ponteiro_2; // aponta para o ponteiro 2

    printf("O endere�o da vari�vel a �: %p\n", &a);
    printf("O endere�o do ponteiro 1 �: %p\n", &ponteiro_1);
    printf("O endere�o do ponteiro 2 �: %p\n", &ponteiro_2);
    printf("O endere�o do ponteiro 3 �: %p\n", &ponteiro_3);
    printf("O endere�o apontado pelo ponteiro 1 �: %p\n", ponteiro_1);
    printf("O endere�o apontado pelo ponteiro 2 �: %p\n", ponteiro_2);
    printf("O endere�o apontado pelo ponteiro 3 �: %p\n", ponteiro_3);

    printf("O valor armazenado em a por a mesmo �: %d\n", a);
    printf("O valor armazenado em a pelo ponteiro 1 �: %d\n", *ponteiro_1);
    printf("O valor armazenado em a pelo ponteiro 2 �: %d\n", **ponteiro_2);
    printf("O valor armazenado em a pelo ponteiro 3 �: %d\n", ***ponteiro_3);

}
// tamb�m conhecida como Ponteiros para ponteiros




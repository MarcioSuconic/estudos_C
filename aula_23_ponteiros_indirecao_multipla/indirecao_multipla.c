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

    printf("O endereço da variável a é: %p\n", &a);
    printf("O endereço do ponteiro 1 é: %p\n", &ponteiro_1);
    printf("O endereço do ponteiro 2 é: %p\n", &ponteiro_2);
    printf("O endereço do ponteiro 3 é: %p\n", &ponteiro_3);
    printf("O endereço apontado pelo ponteiro 1 é: %p\n", ponteiro_1);
    printf("O endereço apontado pelo ponteiro 2 é: %p\n", ponteiro_2);
    printf("O endereço apontado pelo ponteiro 3 é: %p\n", ponteiro_3);

    printf("O valor armazenado em a por a mesmo é: %d\n", a);
    printf("O valor armazenado em a pelo ponteiro 1 é: %d\n", *ponteiro_1);
    printf("O valor armazenado em a pelo ponteiro 2 é: %d\n", **ponteiro_2);
    printf("O valor armazenado em a pelo ponteiro 3 é: %d\n", ***ponteiro_3);

}
// também conhecida como Ponteiros para ponteiros




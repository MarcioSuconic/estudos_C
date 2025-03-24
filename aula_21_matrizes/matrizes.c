#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NUM_L 5
#define NUM_C 4

int main(){

    setlocale(LC_ALL,"");
    int coluna, linha;

    float notas[NUM_L][NUM_C] = {{7.5, 6.8, 9.6, 6.7},
                                 {1.7, 1.8, 1.6, 1.7},
                                 {2.5, 2.2, 2.3, 2.7},
                                 {3.8, 3.7, 3.7, 3.7},
                                 {4.5, 4.2, 4.1, 4.7}};

    printf("imprimindo a matriz...:\n");

    for (linha=0; linha<NUM_L; linha++) {
        for (coluna=0; coluna<NUM_C; coluna++) {
            printf("%5.1f", notas[linha][coluna]);
        }
        printf("\n");
    }


}
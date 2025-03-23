// tamanho fixo, não muda depois de atribuido
// 1 dimensao -> vetor
// 2 dimensoes -> matrizes
// [0] [1] [2] [3] posições
// tipo nome_array[tamanho_array]

// float notas[4]; até quatro valores

// float notas[4] = {7.5, 8.0, 9.3, 9.9}
// float notas = {7.5, 8.0, 9.3, 9.9} --> pode-se omitir o tamanho do array, dá na mesma.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[4] = {7.5, 8.0, 9.3, 9.9};
    int i;

    for (i=0; i<=3; i++) {
        printf("nota: %.2f \n", notas[i]);
    };

    notas[2] = 0;

    for (i=0; i<=3; i++) {
        printf("nota: %.2f \n", notas[i]);
    };

}

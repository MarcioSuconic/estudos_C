// ordenação por bolhas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main(){
    setlocale(LC_ALL,"");

    int numeros[TAM];
    int i, aux, contador;

    printf("Entre com dez números para preencher o array, e pressione ENTER apos digitar cada um.\n");

    for (i=0; i < TAM; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Ordem atual do array:\n");

    for (i=0; i<TAM; i++) {
        printf("%8d", numeros[i]);
    }

    for (contador = 1; contador<TAM; contador++){
        for (i=0; i<TAM-1; i++) {
            if (numeros[i] > numeros[i+1]) {
                aux = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = aux;
            }
        }
    }

    printf("\n\nOrdem atual do array:\n");
    

    for (i=0; i<TAM; i++) {
        printf("%8d", numeros[i]);
    }
        
}
#include <stdio.h>
#include <stdlib.h>

int main () {
    int inteiro1;
    float f1,f2;
    char letra;
    char frase[25];

    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro1);
    printf("Digite dois números de ponto flutuante: ");
    scanf("%f %f", &f1, &f2);
    printf("Digite um caractere: ");
    scanf(" %c", &letra); // precisa deste espaço antes de %c
    
    printf("Digite uma frase: ");
    scanf("%s", &frase);

    printf("\nNumero inteiro: %d\n", inteiro1);
    printf("Ponto Flutuante: %.2f e %.2f\n", f1, f2);
    printf("Caractere %c\n", letra);
    printf("Frase: %s\n\n", frase);

}
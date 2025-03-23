#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2;
    float media;
    
    nota1 = 4.0;
    nota2 = 6.5;

    media = (nota1 + nota2)/2.0;

    if (media >= 7.0){
        printf("aprovado");
    } else {
        if (media >= 6) {
        printf("recuperacao");
        } else {
        printf("reprovado");
        }
    };

    return 0;
}
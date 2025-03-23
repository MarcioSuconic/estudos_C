#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota;
    float total;
    float media;
    int contador;
    char cod;


    while (cod != 'F') {                
        
        total = 0;

        for (contador=1; contador<=4; contador++) {
            printf("Digite o valor da nota: ");
            scanf("%f", &nota);
            total += nota;
            printf("%f\n", total);
        }

        media = total/4;
        printf("A media eh: %.2f\n", media);
        printf("Digite f ou F para parar de rodar....\n");
        cod = getche();
        system("cls");
    }

    printf("\nO programa termina aqui....");
}

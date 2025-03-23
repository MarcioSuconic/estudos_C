#include <stdio.h>
#include <stdlib.h>

int main(){
    int contador = 0;
    float media, total, valor;
    total = 0;
    
    printf("Digite um valor (-1 para encerrar): ");
    scanf("%f", &valor);

    while (valor != -1){
        total = total + valor;
        contador++;
        printf("Digite um valor (-1 para encerrar): ");
        scanf("%f", &valor);
    }
    printf("total: %f\n", total);
    printf("cpnyador: %d\n", contador);
    media = total / contador;    
    printf("A media eh: %.2f\n", media);
    return 0;
}

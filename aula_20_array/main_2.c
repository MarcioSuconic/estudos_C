#include <stdio.h>
#include <stdlib.h>

int main(){
    float notas[4] = {7.5, 8.0, 9.3, 9.9};
    int i;

    for (i=0; i<=3; i++) {
        printf("digite a nota: ");
        scanf("%f", &notas[i]);
    };

    for (i=0; i<=3; i++) {
        printf("nota: %.2f \n", notas[i]);
    };

}

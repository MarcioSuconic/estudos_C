#include <stdio.h>
#include <stdlib.h>

int main () {
    int dia, mes, ano;

    printf("Digite uma data no formato dd//mm//aa: "); 
    scanf("%d%*c%*c%d%*c%*c%d", &dia, &mes, &ano); // %*c significa ignorar 2 caracteres
    printf("Digite uma data no formato dd/mm/aa: "); 
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano); // %*c significa ignorar 1 caractere
    printf("\nDia: %d \n", dia);
    printf("\nMes: %d \n", mes);
    printf("\nAno: %d \n", ano);
    return 0;
}
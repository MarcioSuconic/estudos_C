#include <stdio.h>
#include <stdlib.h>

int x = 450;
float f = 250.123456;
char s[] = "MARSOFT";

int main() {
    printf("%d\n",x);
    printf("%.5d\n",x);
    printf("%.12d\n",x);
    printf("%.2f\n",f);
    printf("%s\n",s);
    printf("%.4s\n",s);
    printf("%.12s\n",s);

    printf("%10.5s\n",s); // tamanho antes do ponto, precisao depois do ponto
    printf("%8.2f\n",f); // tamanho antes do ponto, precisao depois do ponto
    printf("%10.5d\n",x); // tamanho antes do ponto, precisao depois do ponto
}
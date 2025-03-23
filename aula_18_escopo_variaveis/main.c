// variaveis locais - dentro da função
// variaveis parametros de funcao - variavel local
// variavel global, fora de todas as funcoes

// pode, mas não se deve, ter duas variaveis com nomes iguais, uma local e uma global, a local prevalecerá.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num = 15;
void escrevaValor();

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    printf("verificando, é...\n");
    printf("O número é: %d\n", num);
    escrevaValor();
    return 0;
}

void escrevaValor() {
    int dobro = num * 2;
    printf("O dobro é %d\n", dobro);
}
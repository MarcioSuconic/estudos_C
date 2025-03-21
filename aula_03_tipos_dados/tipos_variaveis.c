#include <stdio.h>
#include <stdbool.h>

char var1; // 1 byte   -128 a 127
unsigned char var2; // 1 byte   0 a 255
signed char var3; // 1 byte   -128 a 127   

int var4; // 4 bytes   -2147483648 a 2147483647
unsigned int var5; // 4 bytes   0 a 4294967295
short var6; // 2 bytes   -32768 a 32767
unsigned short var7; // 4 bytes   0 a 65535
long var8; // 4 bytes   -2147483648 a 2147483647
unsigned long var9; // 4 bytes   0 a 4294967295 
float var10; //   4 bytes 6 casas decimais
float var11; //   8 bytes 15 casas decimais
float var12; //   12 bytes 19 casas decimais

bool var13; // precisa da biblioteca stdboll.h --> True é tudo que for diferente de ZERO.
// typedef enum {false=0, true=1} logico; --> versões mais antigas de C
// para criar um tipo de variaveis de lógica

int main(){
    printf("Tamanho de armazenamento para o tipo char: %d \n", sizeof(char)); // &d é um caracterer de controle

    printf("Tamanho de armazenamento para o tipo int: %d \n", sizeof(int));
    printf("Tamanho de armazenamento para o tipo short: %d \n", sizeof(short));
    printf("Tamanho de armazenamento para o tipo long: %d \n", sizeof(unsigned long));
    printf("Tamanho de armazenamento para o tipo float: %d \n", sizeof(float));
    printf("Tamanho de armazenamento para o tipo double: %d \n", sizeof(double));
    printf("Tamanho de armazenamento para o tipo long double: %d \n", sizeof(long double));
    printf("Tamanho de armazenamento para o tipo bool: %d \n", sizeof(bool));

    return 0;
}
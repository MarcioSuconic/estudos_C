// variáveis
// localizada na memória RAM
// características: identificação(nome), endereço, tipo, tamanho, valor(conteúdo)

// NOMES
// um ou mais caracteres
// não pode ter espacos em branco
// nomes compostos -- underline ou CamelCase(definir e sempre seguir)
// não usar palavras reservadas pelo sistema
// pode usar numeros
// simbols, só o underline
// o primeiro caracterer é sempre uma letra

// DECLARAÇÃO VARiÁVEIS
// tipo-dados nome-variável
// inicio do programa ou variaveis locais dentro de funções

// exemplo:

#include <stdio.h>
#include <stdlib.h>

int a,b,c;
char letra;
float valor, aumento;
double patrimonio;
int x=0; // já pode declarar e atribuir valor
float salario = 1800, juros = 0.08;
int y;

int main() {
    
    int idade = 23;
    float valor;
    valor = 2500.600000;
    printf("idade: %d\n", idade); // sempre usar aspas duplas //
    printf("valor: %f\n", valor); 
    y = x = 10; // em C pode-se fazer esta declaracao multipla

}

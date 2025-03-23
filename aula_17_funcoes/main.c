#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escrevaNome(); // a função precisa ser declarada antes --> PROTOTIPO de FUNÇÃO

int main() {
    setlocale(LC_ALL,"");
    escrevaNome();
    escrevaNome();
    escrevaNome();
    return 0;
}

// void qdo não tem retorno // 
// cada função deve realizar somente uma tarefa, uma responsabilidade

void escrevaNome(){
    printf("Bem vindo aos estudos da Linguagem C.\n");

}
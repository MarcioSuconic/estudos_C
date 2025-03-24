#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// definindo uma estrutura (modelo) não criada ainda
struct endereco {
    char rua[50];
    char numero[5];
    char cep[8];
    char bairro[30];
};

struct livro
{
    char nome[30];
    char autor[50];
    int paginas;
    float preco;
} livro_1;

// struct livro livro_1; pode ser assim também

int main(){

    setlocale(LC_ALL,"");
    printf("Cadastrando livro\n");
    printf("\nDigite o nome do livro:\n");
    gets(livro_1.nome);
    printf("\nDigite o autor do livro:\n");
    gets(livro_1.autor);

    printf("\nDigite o números de páginas do livro:\n");
    scanf("%d", &livro_1.paginas);

    printf("\nDigite o preço do livro:\n");
    scanf("%f", &livro_1.preco);

    printf("endereco de livro_1 %p\n", &livro_1);
    printf("endereco de livro_1 %p\n", &livro_1.nome);
    printf("endereco de livro_1 %p\n", &livro_1.autor);
    printf("endereco de livro_1 %p\n", &livro_1.paginas);
    printf("endereco de livro_1 %p\n", &livro_1.preco);

    printf("O livro \"%s\" possui %d páginas, custa R$ %6.2f\n e foi escrito por %s\n\n", livro_1.nome, livro_1.paginas, livro_1.preco, livro_1.autor);

}


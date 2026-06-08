#include <stdio.h>

typedef struct{
    char titulo[50];
    char autor[50];
    int ano_publicacao;
}livro;

void pulaLinha(){
printf("   ----------   \n\n");

}

int main(){

livro livro1;

    printf(" ===== preencha os dados dos livros: ===== \n\n");
    printf("digite o titulo do livro \n");
    fgets(livro1.titulo, 50, stdin);
    pulaLinha();

    printf("digite o autor do livro \n");
    fgets(livro1.autor, 50, stdin);
    pulaLinha();

    printf("digite o ano do livros \n");
    scanf(" %d", &livro1.ano_publicacao);
    pulaLinha();

    printf("o livro digitado foi: \n");
    printf("Autor: %s", livro1.autor);
    printf("Titulo: %s \n", livro1.titulo);
    printf("Ano publicação: %d \n", livro1.ano_publicacao);


return 0;
}

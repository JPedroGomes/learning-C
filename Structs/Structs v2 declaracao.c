# include <stdio.h>
#include <string.h>

// struct > estrutuda:

struct st_aluno{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
}aluno1;

void pulaLinha(){
printf("\n     - - - - -     \n");

}

int main(){

    printf("digite a matricula: \n");
    fgets(aluno1.matricula, 10, stdin);
    pulaLinha();

    printf("digite o nome: \n");
    fgets(aluno1.nome, 100, stdin);
    pulaLinha();

    printf("digite o curso: \n");
    fgets(aluno1.curso, 50, stdin);
    pulaLinha();

    printf("digite o ano de nascimento: \n");
    scanf(" %d", &aluno1.ano_nascimento);

    pulaLinha();

    printf(" ========== Dados do Aluno ========== \n");
    printf("Matricula %s\n", aluno1.matricula);
    printf("Nome %s\n", aluno1.nome);
    printf("Curso %s\n", aluno1.curso);
    printf("Nascimento %d\n", aluno1.ano_nascimento);

return 0;
}

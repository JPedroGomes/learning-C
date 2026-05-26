# include <stdio.h>
#include <string.h>

// struct > estrutuda:

struct st_contato{
    char nome[100];
    char telefone[15];
    char email[30];
    int ano_nascimento;
};

struct st_agenda{
    struct st_contato contato[20];
}agenda;


void pulaLinha(){
printf("\n     - - - - -     \n");

}

int main(){

    for(int i = 0; i < 3; i++){
        printf("informe o nome: \n");
        fgets(agenda.contato[i].nome, 100, stdin);
        pulaLinha();

        printf("digite o telefone: \n");
        fgets(agenda.contato[i].telefone, 15, stdin);
        pulaLinha();

        printf("digite o email: \n");
        fgets(agenda.contato[i].email, 30, stdin);
        pulaLinha();

        printf("digite o ano de nascimento: \n");
        scanf(" %d", &agenda.contato[i].ano_nascimento);
        getchar();
        pulaLinha();
    };

    printf(" ========== Dados do Aluno ========== \n");
    for(int i = 0; i < 3; i++){
    printf(" ========== Contato %d ========== \n", i+1);
    printf("Nome %s\n", agenda.contato[i].nome);
    printf("Telefone %s\n", agenda.contato[i].telefone);
    printf("E-mail %s\n", agenda.contato[i].email);
    printf("Ano de Nascimento %d\n", agenda.contato[i].ano_nascimento);
    };

return 0;
}

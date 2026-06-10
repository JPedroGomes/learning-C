#include <stdio.h>
#include <string.h> // Necessário para a função strcspn

typedef struct {
    char nome[50];
    int idade;
} Pessoa; // Por convenção, nomes de tipos começam com maiúscula

void pulaLinha() {
    printf("\n      - - - - -      \n");
}

int main() {
    Pessoa p1;

    printf("Digite o nome: ");
    fgets(p1.nome, 50, stdin);

    // Remove o '\n' que o fgets adiciona ao final
    p1.nome[strcspn(p1.nome, "\n")] = 0;

    printf("Digite a idade: ");
    if (scanf("%d", &p1.idade) != 1) {
        printf("Erro: Idade inválida.\n");
        return 1;
    }

    pulaLinha();

    printf("Dados cadastrados:\n");
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);

    return 0;
}

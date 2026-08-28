/*
==================================================
Author: João Pedro Gomes
Project: Linked List in C

Description:
Write a program that implements a singly linked list
using dynamically allocated nodes.

The program allows the user to:
- Display the linked list;
- Insert a new node at the beginning;
- Insert a new node at the end;
- Clear the entire list;
- Exit the program.

Each node stores an integer value and a pointer to
the next node in the list.

The nodes are dynamically allocated using malloc()
and released using free() when the list is cleared
or the program is terminated.

Descrição:
Faça um programa que implemente uma lista simplesmente
encadeada utilizando nós alocados dinamicamente.

O programa permite ao usuário:
- Exibir a lista encadeada;
- Inserir um novo nó no início;
- Inserir um novo nó no final;
- Zerar a lista;
- Encerrar o programa.

Cada nó armazena um valor inteiro e um ponteiro para
o próximo nó da lista.

Os nós são alocados dinamicamente utilizando malloc()
e liberados utilizando free() quando a lista é zerada
ou o programa é encerrado.

==================================================
*/

#include <stdio.h>
#include <stdlib.h>

struct st_no {
    int valor;
    struct st_no *prox;
};

typedef struct st_no no;

int VerificaSeListaEstaVazia(no *le) {
    if(le->prox == NULL) {
        return 1;
    } else {
        return 0;
    }
}

void IniaListaEncadeada(no *le) {
    le->prox = NULL;
}

void LiberaLisgtaEncadeada(no *le) {
    if(!VerificaSeListaEstaVazia(le)) {
        no *atual, *proxNo;
        atual = le->prox;

        while(atual != NULL) {
            proxNo = atual->prox;
            free(atual);
            atual = proxNo;
        }

        le->prox = NULL;
    }
}

void ExibeListaEncadeada(no *le) {
    if(VerificaSeListaEstaVazia(le)) {
        printf("A lista esta vazia\n");
        return;
    }

    no *temp;
    temp = le->prox;

    while(temp != NULL) {
        printf("|%d| - ", temp->valor);
        temp = temp->prox;
    }

    printf("NULL\n");
}

void InsereInicio(no *le) {
    no *novo = (no*)malloc(sizeof(no));

    if(!novo) {
        printf("Sem espaco de memoria\n");
        exit(1);
    }

    printf("Informe um valor: ");
    scanf("%d", &novo->valor);

    no *oldHead = le->prox;

    le->prox = novo;
    novo->prox = oldHead;
}

void insereFim(no *le) {
    no *novo = (no*)malloc(sizeof(no));

    if(!novo) {
        printf("Sem espaco de memoria\n");
        exit(1);
    }

    printf("Informe um valor: ");
    scanf("%d", &novo->valor);

    novo->prox = NULL;

    if(VerificaSeListaEstaVazia(le)) {
        le->prox = novo;
    } else {
        no *temp = le->prox;

        while(temp->prox != NULL) {
            temp = temp->prox;
        }

        temp->prox = novo;
    }
}

void opcao(no *le, int opt) {
    switch(opt) {

        case 0:
            LiberaLisgtaEncadeada(le);
            break;

        case 1:
            ExibeListaEncadeada(le);
            break;

        case 2:
            InsereInicio(le);
            break;

        case 3:
            insereFim(le);
            break;

        case 4:
            LiberaLisgtaEncadeada(le);
            break;

        default:
            printf("Comando invalido\n\n");
    }
}

int menu() {
    int opt;

    printf("Escolha a opcao: \n");
    printf("[0] - Sair: \n");
    printf("[1] - Exibir: \n");
    printf("[2] - Adicionar no no inicio: \n");
    printf("[3] - Adicionar no no fim: \n");
    printf("[4] - Zerar lista: \n");
    printf("Opcao: ");

    scanf("%d", &opt);

    return opt;
}

int main() {
    no *le = (no*)malloc(sizeof(no));

    if(!le) {
        printf("sem memoria");
        exit(1);
    }

    IniaListaEncadeada(le);

    int opt;

    do {
        opt = menu();
        opcao(le, opt);
    } while(opt);

    free(le);

    return 0;
}

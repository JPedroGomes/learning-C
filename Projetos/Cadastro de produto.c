/*
==================================================
Author: João Pedro Gomes
Project: Inventory Management System in C

Description:
Develop a simple inventory management system using
dynamic memory allocation.
The program allows the user to register products,
store their name, price and quantity, and display
the current inventory with the total value of each
product in stock.
The project practices structures, functions,
dynamic memory allocation with malloc(), pointers
and menu-driven programming.

Descrição:
Desenvolva um sistema simples de gerenciamento de
estoque utilizando alocação dinâmica de memória.
O programa permite cadastrar produtos, armazenando
nome, preço e quantidade em estoque, além de
consultar todos os produtos cadastrados e exibir
o valor total de cada item.
O projeto pratica estruturas (struct), funções,
ponteiros, alocação dinâmica com malloc() e
programação orientada a menus.

Date:
17/07/2026
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    float preco;
    int unidades;

}produto;


void pulaLinha(){
printf("   ----------   \n\n");

}

void menu(){
    printf("Menu Principal: \n");
    printf("Oque você gostaria de realizar hoje? \n");
    printf("1 - Cadastrar produtos \n");
    printf("2 - Verificar estoque \n");
    printf("0 - Finalizar \n");
}

void cadastroProduto(produto *produtos, int quantidade){
    printf("Para finalizar digite o nome, valor e quantidade disponivel do produto");
    getchar();
    for(int i = 0; i < quantidade; i++){
        printf("Produto %d: \n", i+1);
        printf("Digite o nome: \n");
        fgets(produtos[i].nome, 50, stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

        printf("Digite o preco: \n");
        scanf("%f", &produtos[i].preco);

        printf("Digite a quantidade em estoque: \n");
        scanf("%d", &produtos[i].unidades);
        getchar();
    }

    printf("Produtos cadastrados com sucesso \U0001f600 \n");

}

void verificarEstoque(produto *produtos, int quantidade){
    printf("Produtos disponiveis:\n");
    for(int i = 0; i < quantidade; i++){
        printf("Produto: %s\n", produtos[i].nome);
        printf("valor unitário do produtos: %.2f\n", produtos[i].preco);
        printf("Quantidade total em estoque: %d\n", produtos[i].unidades);
        printf("valor total do estoque: %f\n", produtos[i].preco * produtos[i].unidades);

    }

}

int main()
{
    int opcao;
    int quantidade = 0;
    produto *produtos = NULL;

    printf(" ----- Bem vindo! -----\n");
    pulaLinha();

    do{
        menu();
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("--- Bem vindo ao: Cadastrar Produto --- \n");
                printf(" Quantos produtos serão cadastrados? \n");
                scanf("%d", &quantidade);

                produtos = malloc(sizeof(produto) * quantidade);

                if(produtos == NULL){
                    printf("Erro ao alocar memoria!\n");
                    return 1;
                }

                cadastroProduto(produtos, quantidade);
            break;

            case 2:
                if(produtos == NULL){
                    printf("nenhum produto cadastrado :P\n");
                    pulaLinha();
                }else{
                printf("--- Bem vindo ao: Verificar Estoque --- \n");
                verificarEstoque(produtos, quantidade);
                }
            break;

            case 0:
                printf("Saindo do programa: Até mais! \U0001f600 \n");
                free(produtos);
                return 1;

            break;
             default:
                printf("\nOpcao invalida! Tente novamente.\n");
                pulaLinha();
        }


    } while (opcao != 0);


free(produtos);
    return 0;
}

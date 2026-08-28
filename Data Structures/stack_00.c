/*
==================================================
Author: João Pedro Gomes
Project: Stack in C

Description:
Write a program that implements a stack using an
array of integers with a fixed size of 5 elements.

The program allows the user to:
- Display the current stack;
- Add elements to the stack (push);
- Remove elements from the stack (pop);
- Clear the stack;
- Exit the program.

The stack follows the LIFO (Last In, First Out)
principle, where the last element inserted is the
first element removed.

The program uses the top variable to control the
position of the top element in the stack.

Descrição:
Faça um programa que implemente uma pilha utilizando
um vetor de inteiros com tamanho fixo de 5 elementos.

O programa permite ao usuário:
- Exibir a pilha atual;
- Adicionar elementos à pilha (push);
- Remover elementos da pilha (pop);
- Limpar a pilha;
- Encerrar o programa.

A pilha segue o princípio LIFO (Last In, First Out),
onde o último elemento inserido é o primeiro
elemento removido.

O programa utiliza a variável topo para controlar
a posição do topo da pilha.

==================================================
*/

#include <stdio.h>
#define TAMPILHA 5

int pilha[TAMPILHA] = {0, 0, 0, 0, 0};
int topo = 0;

void mostrarPilha(){
    printf("==================== Pilha atual =====================\n\n");
    for(int i = 0; i < TAMPILHA; i++){
        printf("|%d|", pilha[i]);
    }
    printf("\n\n");
    printf("topo: %d\n");
}

void push(){
    int val;
    if(topo < TAMPILHA){
        printf("Digite um valor a ser adicionado");
        scanf("%d", &val);
        pilha[topo] = val;
        topo = topo + 1;
        mostrarPilha();
        
    }else{
        printf("A pilha está cheia");
    }
}

void pop(){
    if(topo > 0){
        pilha[topo - 1] = 0;
        topo = topo - 1;
        mostrarPilha();
    }else{
        printf("a pilha está vazia");
    }
}

void clear(){
    for(int i = 0; i < TAMPILHA; i++){
        pilha[i] = 0;
    }
    topo = 0;
    mostrarPilha();
}

void mostrarMenu() {
	int opcao;
	do {
		printf("Selecione uma opcao\n");
		printf(" 1 - Mostrar pilha atual\n");
		printf(" 2 - ´´Empilheirar´´ (adicionar um valor a pilha)\n");
		printf(" 3 - ´´Desenpilheirar´´ (Retirar um valor da pilha)\n");
		printf(" 4 - Reiniciar Pilha do Zero\n");
		printf(" 5 - Sair\n");
		scanf("%d", &opcao);

		switch(opcao) {
		case 1:
			mostrarPilha();
			break;

		case 2:
			push();
			break;

		case 3:
			pop();
			break;

		case 4:
			clear();
			break;

		default:
			printf("Opcao invalida\n");
		}
	} while(opcao != 5);
}


int main()
{
    printf("Ola, visitante! Bem-vindo\n");
	mostrarMenu();


    return 0;
}
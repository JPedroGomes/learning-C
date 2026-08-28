/*
==================================================
Author: João Pedro Gomes
Project: Circular Queue in C

Description:
Write a program that implements a circular queue
using an array of integers with a fixed size.

The program allows the user to:
- Display the current queue;
- Add elements to the queue (enqueue);
- Remove elements from the queue (dequeue);
- Reset the queue;
- Exit the program.

The queue uses the FIFO (First In, First Out) principle.
The circular implementation allows the queue to reuse
positions that become available after elements are removed.

The program uses the head, tail and quantity variables
to control the queue's position and number of elements.

Descrição:
Faça um programa que implemente uma fila circular
utilizando um vetor de inteiros com tamanho fixo.

O programa permite ao usuário:
- Exibir a fila atual;
- Adicionar elementos à fila (enfileirar);
- Remover elementos da fila (desenfileirar);
- Reiniciar a fila;
- Encerrar o programa.

A fila utiliza o princípio FIFO (First In, First Out).
A implementação circular permite reutilizar posições
que ficam disponíveis após a remoção de elementos.

O programa utiliza as variáveis head, tail e quantidade
para controlar as posições e a quantidade de elementos
da fila.
==================================================
*/
#include <stdio.h>
#define TAMFILA 5

int fila[TAMFILA] = {0, 0, 0, 0, 0};
int head = 0;
int tail = 0;
int quantidade = 0;


void mostrarFila(){
        printf(" =============== Fila Atual ===============\n");
        for(int i = 0; i < TAMFILA; i++){
            printf("|%d| - ", fila[i]);
        }
        printf("\nHead: %d\n", head);
        printf("tail: %d\n", tail);
    
}


void Enfileirar(){
    int valor;
    
    if(quantidade < TAMFILA){
        printf("Qual valor deseja adicionar a fila\n");
        scanf("%d", &valor);
        fila[tail] = valor;
        tail++;
        
        if(tail == TAMFILA){
            tail = 0;
        }
        quantidade++;
        mostrarFila();
    }else{
        printf("A fila esta cheia, volte dps\n");
    }
}


void Desenfileirar(){
    
    if(quantidade == 0){
        printf("a fila esta vazia...");
    }else{
        fila[head] = 0;
        head++;
        
        if(head == TAMFILA){
            head = 0;
        }
        quantidade--;
        mostrarFila();
    }
}


void Clear(){
    for(int i = 0; i < TAMFILA; i++){
        fila[i] = 0;
    }
    head = 0;
    tail = 0;
    quantidade = 0;
    mostrarFila();
}

void mostrarMenu() {
	int opcao;
	do {
		printf("Selecione uma opcao\n");
		printf(" 1 - Mostrar Fila atual\n");
		printf(" 2 - Enfileirar\n");
		printf(" 3 - Desenfileirar\n");
		printf(" 4 - Reiniciar Fila do Zero\n");
		printf(" 5 - Sair\n");
		scanf("%d", &opcao);

		switch(opcao) {
		case 1:
			mostrarFila();
			break;

		case 2:
			Enfileirar();
			break;

		case 3:
			Desenfileirar();
			break;

		case 4:
			Clear();
			break;

		default:
			printf("Opcao invalida\n");
		}
	} while(opcao != 5);
}


int main()
{
    mostrarMenu();
    return 0;
}
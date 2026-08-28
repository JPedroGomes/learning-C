/*
==================================================
Author: João Pedro Gomes
Project: Fila em C

Description:
Write a program that implements a queue using an array
of integers with a fixed size of 10 elements.

The program allows the user to:
- Add elements to the queue (enqueue);
- Remove elements from the queue (dequeue);
- Display the current queue;
- Clear the queue;
- Exit the program.

The queue uses the FIFO (First In, First Out) principle,
where the first element inserted is the first one removed.

Descrição:
Faça um programa que implemente uma fila utilizando um
vetor de inteiros com tamanho fixo de 10 elementos.

O programa permite ao usuário:
- Adicionar elementos à fila (enqueue);
- Remover elementos da fila (dequeue);
- Exibir a fila atual;
- Limpar a fila;
- Encerrar o programa.

A fila utiliza o princípio FIFO (First In, First Out),
onde o primeiro elemento inserido é o primeiro a ser removido.

==================================================
*/

#include <stdio.h>
#define TAMFILA 10


int fila[TAMFILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0;
int tail = 0;

void ListarElementos(){
    printf("\n ====================FILA ATUAL====================\n");
    for(int i = 0; i < TAMFILA; i++){
        printf("-");
        printf("|%d|", fila[i]);
        printf("-");
    }
    printf("\nHead: %d\n", head);
    printf("Tail: %d\n", tail);
    printf("\n\n");
}

void enqueue(){
    if(tail < TAMFILA){
        int val;
        printf("Informe o numero a ser adicionado: \n");
        scanf("%d", &val);
            
        fila[tail] = val;
        tail = tail + 1;
        ListarElementos();
    }else{
        printf("A fila está cheia");
    }
}

void dequeue(){
    if(head < tail){
        fila[head] = 0;
        head = head + 1;
        ListarElementos();
    }else{
        printf("A fila está vazia");
    }
}


void clear(){
    for(int i = 0; i < TAMFILA; i++){
        fila[i] = 0;
    }
    head = 0;
    tail = 0;
}

int main()
{   
    int opcao = 0;
    ListarElementos();
    
    do{
        printf("Selecione uma opcao\n");
        printf(" 1 - Inserir\n");
        printf(" 2 - remover\n");
        printf(" 3 - Listar\n");
        printf(" 4 - Limpar\n");
        printf(" 5 - Sair\n");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                ListarElementos();
                break;
            case 4:
                clear();
                break;
            case -1:
                break;
            default:
                printf("Opcao invalida\n");
            
        }
        
    }while(opcao != 5);
    
    return 0;
}
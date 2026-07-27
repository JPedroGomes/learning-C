/*
Author: João Pedro Gomes

Description:
Write a program that dynamically allocates memory
for an array of 5 integers using malloc().
Allow the user to enter the values, display all
stored numbers, and properly release the allocated
memory before terminating the program.

Descrição:
Faça um programa que aloque dinamicamente memória
para um vetor de 5 números inteiros utilizando
malloc(). Permita que o usuário informe os valores,
exiba todos os números armazenados e libere a
memória alocada corretamente antes de encerrar
o programa.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numeros;
    
    numeros = (int*)malloc(5 * sizeof(int));
    
    if(numeros){
        printf("Memoria alocada com sucesso\n");
    }else{
        printf("Sem espaço de memoria");
        return 1;
    }
    
    printf("informe 5 numeros:\n");
    printf("=====  ===  =====  === =====\n");
    printf("\n");
    
    for(int i = 0; i < 5; i++){
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    
     for(int i = 0; i < 5; i++){
       printf("%d\n", numeros[i]);
    }
    
    
    free(numeros);
    numeros = NULL;
    
    return 0;
}
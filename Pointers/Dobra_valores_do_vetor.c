/*
==================================================
Author: João Pedro Gomes
Project: Pointers in C

Description:
Write a program that contains an array of 5 integers.
Using only pointer arithmetic, read the values from the keyboard
and print the double of each entered value.

Descrição:
Faça um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia este array do teclado
e imprima o dobro de cada valor lido.

Date:
21/04/2026
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    int numero[6];

    int *ptrn = &numero[0];


    for(int i = 0; i < 5; i++){
        printf("digite o %d. valor: ", i+1);
        scanf(" %d", (ptrn + i));
    }

     for(int i = 0; i < 5; i++){
        printf("%d \n", (*(ptrn + i) * 2));

    }

    return 0;
}

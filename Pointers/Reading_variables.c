/*
==================================================
Author: João Pedro Gomes
Project: Pointers in C

Description:
Write a program that declares an integer, a float,
a char and pointers for each data type.
Associate the variables with the pointers using (&).
Modify the values of each variable through the pointers
and print the values before and after the modification.

Descrição:
Faça um programa que declare um inteiro, um real e um char,
e ponteiros para inteiro, real e char.
Associe as variáveis aos ponteiros usando (&).
Modifique os valores de cada variável utilizando os ponteiros
e imprima os valores antes e após a modificação.

Date:
21/04/2026
*/

#include <stdio.h>

void pulaLinha(){
    printf("\n\n     -----     \n");
}

int main()
{

    float numero;
    char letra[2];
    char nome[30];

    float *ptrn = &numero;
    char *ptrl = &letra[0];
    char *ptrc = &nome[0];

    printf("Digite um numero\n");
    scanf("%f", ptrn);
    printf("O numero digitado foi: %.1f", *ptrn);

    pulaLinha();

    printf("Digite um caractere\n");
    scanf(" %c", ptrl);
    printf("O caractere digitado foi: %c", *ptrl);

    pulaLinha();

    printf("Digite um nome\n");
    scanf(" %s", ptrc);
    printf("O nome digitado foi: %s", ptrc);

    pulaLinha();
    printf("Os dados digitados foram: \n");
    printf("O numero digitado foi: %.1f \n", *ptrn);
    printf("O caractere digitado foi: %c \n", *ptrl);
    printf("O nome digitado foi: %s \n", ptrc);


    return 0;
}

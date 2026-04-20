#include <stdio.h>
/*
Author: Joao Pedro Gomes
Project: Pointers in C

Description:
First pointer exercise. Program that creates an
integer variable, uses a pointer to access its value,
and allows the user to change the value through the pointer.

Descrição:
Primeiro exercício de ponteiros. Programa que cria
uma variável inteira, utiliza um ponteiro para acessar
seu valor e permite ao usuário alterar o valor através
do ponteiro.

Beschreibung:
Erste Zeigerübung. Programm, das eine Ganzzahlvariable erstellt,
einen Zeiger verwendet, um auf ihren Wert zuzugreifen,
und dem Benutzer erlaubt, den Wert über den Zeiger zu ändern.

Date:
20/04/2026

Difficulty:
Beginner
*/


int main() {
    int valor = 42;
    int *ptr; // Declaramos o ponteiro

    // Agora precisamos "apontar" o ptr para a variável valor
    ptr = &valor; 

    // Para imprimir o número usando o ponteiro, usamos o *ptr
    printf("O numero atraves do ponteiro é %d\n", *ptr);
    
    
    // Alterando o valor da variavel
    printf("digite o novo valor: \n");
    scanf("%d", ptr);
    
    // Para imprimir o novo número usando o ponteiro
    
    printf(" O novo valor é %d", *ptr);

    return 0;
}
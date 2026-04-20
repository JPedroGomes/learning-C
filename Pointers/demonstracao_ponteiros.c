#include <stdio.h>

/*
Author: Joao Pedro Gomes
Project: Pointers in C

Description:
Program that demonstrates basic pointer usage.
It shows the value of an integer variable, its memory
address, the pointer address, and allows the user
to modify the value through the pointer.

Descrição:
Programa que demonstra o uso básico de ponteiros.
Exibe o valor de uma variável inteira, seu endereço
de memória, o endereço do ponteiro e permite ao
usuário modificar o valor através do ponteiro.

Beschreibung:
Programm, das die grundlegende Verwendung von Zeigern zeigt.
Es zeigt den Wert einer Ganzzahlvariable, ihre Speicheradresse,
die Adresse des Zeigers und erlaubt dem Benutzer,
den Wert über den Zeiger zu ändern.

Date:
20/04/2026

Difficulty:
Beginner
*/

void pulaLinha(){
    printf("\n     -----     \n");
}

int main()
{
    
    int numero = 10;
    int *ptr = &numero;
    
    printf("O valor guardado na variavel é %d \n", numero);
    printf("O valor guardado é %d \n", *ptr);
    printf("O endereço de memória da variavel número é %p \n", &numero);
    printf("O endereço de memória do ponteiro é %p \n", &ptr);
    
    pulaLinha();
    
    printf("Digite um novo valor: \n");
    scanf("%d", ptr);
    
    printf("O novo valor valor visto atraves do ponteiro é: %d", *ptr);
    
    return 0;
}
#include <stdio.h>
#include <ctype.h>

/*
Author: Joao Pedro Gomes
Project: Functions in C

Description:
Program that reads a character entered by the user
and uses a function to convert it to uppercase.

Descrição:
Programa que lê um caractere digitado pelo usuário
e utiliza uma função para convertê-lo em maiúsculo.

Beschreibung:
Programm, das ein vom Benutzer eingegebenes Zeichen liest
und eine Funktion verwendet, um es in einen Großbuchstaben umzuwandeln.

Date:
18/04/2026

Difficulty:
Beginner
*/

char transformaEmMaiusculo(char car){
    char letraMaiuscula = toupper(car);
    return letraMaiuscula;
}

void pulaLinha(){
    printf("\n     -----     \n");
}

int main(){
    
    char car;
    
    printf("digite um caractere \n");
    scanf(" %c", &car);
    pulaLinha();
    
    printf("A letra que vc digitou é: \n");
    printf("%c", car);
    pulaLinha();
    
    printf("A letra que vc digitou maiuscula é: \n");
    printf("%c", transformaEmMaiusculo(car));
   
   
    return 0;
}
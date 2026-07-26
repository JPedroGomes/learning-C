/*
==================================================
Author: João Pedro Gomes
Project: Writing Text Files in C

Description:
Write a program that creates a text file and allows
the user to enter fruit names.
Each fruit entered by the user is written to the file.
The program continues receiving input until the user
types '0', ending the data entry process.

Descrição:
Faça um programa que crie um arquivo de texto e
permita ao usuário informar nomes de frutas.
Cada fruta digitada deve ser gravada no arquivo.
O programa continua recebendo entradas até que o
usuário digite '0', encerrando o cadastro.

Date:
*/

#include <stdio.h>

int main(){

FILE *arq;
char frutas[10];

arq = fopen("frutas.txt", "w");

if(arq){
    printf("informe uma fruta ou 0 para sair: \n");
    fgets(frutas, 10, stdin);
    while(frutas[0] != '0'){
            fputs(frutas, arq);
            printf("informe uma fruta ou 0 para sair: \n");
            fgets(frutas, 10, stdin);
    }
   }else{
    printf("não achei");
}

fclose(arq);

return 0;
}

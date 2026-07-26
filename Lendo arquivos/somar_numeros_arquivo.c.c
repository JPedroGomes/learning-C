/*
==================================================
Author: João Pedro Gomes
Project: Reading Integers from a File in C

Description:
Write a program that opens a text file containing
integer values, reads each number using fscanf(),
calculates the sum of all valid integers found,
and displays the final result on the screen.

Descrição:
Faça um programa que abra um arquivo de texto
contendo números inteiros, leia cada valor
utilizando fscanf(), calcule a soma de todos
os números válidos encontrados no arquivo e
exiba o resultado final na tela.

*/

#include <stdio.h>

int main(){

FILE *arq;
int num, resultado, soma = 0;

arq = fopen("Arq_Numbers_(somar_numeros).txt", "r");

if(arq){
   while(!feof(arq)){
    resultado = fscanf(arq, "%d", &num);
    if(resultado == 1){
    soma = soma + num;
    }

   }
}else{
    printf("não achei");
}

printf("a soma dos numeros encontrados no arquivo é: %d", soma);
fclose(arq);

return 0;
}

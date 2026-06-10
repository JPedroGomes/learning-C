#include <stdio.h>
/*
==================================================
Author: João Pedro Gomes
Project: Structs in C

Description:
Write a program that reads a person's name, age, and address and stores the data in a structure.

Descrição:
Crie um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma
struct.

Date:
04/06/2026
*/



struct st_pessoa{
    char nome[50];
    int idade;
    char endereco[100];
}pessoa1;

void pulaLinha(){
printf("\n     - - - - -     \n");

}

int main(){

printf("digite os dados da pessoa: \n");
pulaLinha();

printf("digite o nome: \n");
fgets(pessoa1.nome, 50, stdin);

printf("digite a Idade: \n");
scanf(" %d", &pessoa1.idade);
getchar();

printf("digite o endereço: \n");
fgets(pessoa1.endereco, 100, stdin);

printf("Os dados da pessoa são: \n");
pulaLinha();

printf("%s", pessoa1.nome);
printf("%d \n", pessoa1.idade);
printf("%s", pessoa1.endereco);
return 0;
}

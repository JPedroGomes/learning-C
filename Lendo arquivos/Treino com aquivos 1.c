/*
==================================================
Author: João Pedro Gomes
Project: File Writing and Reading in C

Description:
Write a program that creates a text file and allows
the user to enter multiple lines of text.
The program should continue receiving input until
the user types '0' on a new line.
After saving the content, reopen the file in read
mode and display its contents on the screen.

Descrição:
Faça um programa que crie um arquivo de texto e
permita ao usuário digitar várias linhas.
O programa deve continuar recebendo texto até que
o usuário digite '0' em uma nova linha.
Após salvar o conteúdo, reabra o arquivo em modo
de leitura e exiba todo o seu conteúdo na tela.

Date:
26/07/2026
*/
#include <stdio.h>

void pulaLinha(){
printf("\n     -----    \n");
}

int main(){

FILE *arq;
char texto[250];
char c;

arq = fopen("texto.txt", "w");

if(arq){
    printf("Pode escrever o texto de 250 caracteres, quando terminar digite 0: \n");
    fgets(texto, 250, stdin);

        while(texto[0] != '0'){
            fputs(texto, arq);

    fgets(texto, 250, stdin);
        }
}else{
    printf("deu ruim");
}

fclose(arq);

pulaLinha();
pulaLinha();

arq = fopen("texto.txt", "r");

if(arq){
    while((c = getc(arq)) != EOF){
          printf("%c", c);
          }
}else{
printf("deu ruim");
}

fclose(arq);

pulaLinha();
pulaLinha();

return 0;
}

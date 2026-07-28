/*
==================================================
Author: João Pedro Gomes

riginal Exercise:
Create a program that initially allocates an array
of 3 integers. Ask the user how many values they
want to enter. Use realloc() if the number of
values is greater than 3. Read and display all
entered values.

Enunciado Original:
Faça um programa aloque inicialmente um vetor com
3 inteiros, pergunte ao usuário quantos valores ele
quer informar, use REALLOC caso seja mais que
3 valores, leia e apresente os valores.

==================================================
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numeros;
    int quantidade;

    numeros = (int*)malloc(3 * sizeof(int));

    if (numeros == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Quantos numeros deseja informar? ");
    scanf("%d", &quantidade);

    if (quantidade > 3){
        
        numeros = (int*)realloc(numeros, quantidade * sizeof(int));
        if (numeros == NULL) {
            printf("Erro ao realocar memoria.\n");
            return 1;
        }
    }
    
    printf("\n -==========================================================-\n");
    printf("Digite os %d numeros:\n", quantidade);

    for(int i = 0; i < quantidade; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros informados:\n");

    for (int i = 0; i < quantidade; i++) {
        printf("%d\n", numeros[i]);
    }

    free(numeros);
    numeros = NULL;

    return 0;
}

/*
Faça um programa aloque inicialmente um vetor com 3 inteiros, 
pergunte ao usuário quantos valores ele
quer informar, use REALLOC caso seja mais que 3 valores, leia e apresente os valores. 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numeros;
    
    numeros = (int*) malloc(3 * sizeof(int));
    if(numeros == NULL){
        printf("sem espaço de memoria");
        free(numeros);
        return 1;
    }
    printf("Informe 3 números:\n");

    for (int i = 0; i < 3; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &numeros[i]);
    }
    
    printf("Adicionando mais numeros: \n");
    
    numeros = (int*) realloc(numeros, 3 * sizeof(int));
     if(numeros == NULL){
        printf("sem espaço de memoria");
        free(numeros);
        return 1;
    }
    
    printf("digite três numeros: \n");
    
    for(int i = 0; i < 3; i++){
        printf("digite o %d. numero:\n", i + 1);
        scanf("%d", &numeros[i+3]);
    }
    
    printf("Os numeros digitados são: \n");
    
   for(int i = 0; i < 6; i++){
        printf("numero %d. >> %d:\n", i + 1, numeros[i]);
        
    }

    free(numeros);
    numeros = NULL;

    return 0;
}
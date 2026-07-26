/**

**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade, NovaQuantidade = 0;
    int *numeros = NULL;
    int opcao;

    printf("quantos numeros?");
    scanf("%d", &quantidade);

    numeros = (int *) malloc(quantidade * sizeof(int));

    if (numeros == NULL){
        printf("Erro - memoria insuficiente");
        return 1;
    }

    for(int i = 0; i < quantidade; i++){
        printf("digite um numero\n");
        scanf("%d", &numeros[i]);
    }


    printf("Deseja cadastrar mais algum numero?\n 1 - Sim\n 2 - Não");
    scanf("%d", &opcao);
    if(opcao == 1){

        printf("quantos dumeros?");
        scanf("%d", &NovaQuantidade);

        int quantidadeTotal = quantidade + NovaQuantidade;


    numeros = (int*) realloc(numeros, quantidadeTotal * sizeof(int));
    if(numeros){
        printf("ok!\n");
    }else{
        printf("Erro - memoria insuficiente");
    }

    for(int i = 0; i < NovaQuantidade; i++){
        printf("digite um numero\n");
        scanf("%d", &numeros[quantidade+i]);
    }

    printf("Os numeros digitados foram\n");
    for(int i = 0; i < quantidadeTotal; i++){
        printf("numero %d - %d \n",i + 1, numeros[i]);
    }

    }else if(opcao == 2){
    printf("ok... tchau");
    free(numeros);
    return 0;
    }else{
        printf("opção invalida");
        free(numeros);
        return 0;
    }


free(numeros);
    return 0;
}

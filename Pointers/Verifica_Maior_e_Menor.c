/*
Crie uma função que encontre tanto o maior quanto o menor valor dentro de um array de inteiros.
Como uma função em C só pode retornar um único valor diretamente usando o return,
você usará ponteiros para atualizar as variáveis de máximo e mínimo diretamente na memória da função chamadora (como a main).

A função precisará de quatro informações para funcionar:

O array de inteiros.

O tamanho do array.

Um ponteiro para a variável onde o valor mínimo será armazenado.

Um ponteiro para a variável onde o valor máximo será armazenado.

*/

#include <stdio.h>

void pulaLinha(){
    printf("\n   ----------   \n\n");
}

void verificaValores(int *ptrn, int tamanho, int *ptrmin, int *ptrmax) {
    *ptrmin = ptrn[0]; // O conteúdo de ptrmin recebe o valor da posição 0
    *ptrmax = ptrn[0]; // O conteúdo de ptrmax recebe o valor da posição 0

for(int i = 1; i < tamanho; i++) {
    if(ptrn[i] > *ptrmax) {
    *ptrmax = ptrn[i]; // O conteúdo apontado por ptrmax recebe o novo maior valor
    }
}

for(int i = 1; i < tamanho; i++) {
    if(ptrn[i] < *ptrmin) {
    *ptrmin = ptrn[i]; // O conteúdo apontado por ptrmax recebe o novo menor valor
    }
}

}

int main()
{
    int numeros[6];
    int valorMinimo;
    int valorMaximo;
    int tamanho = 5;

    int *ptrn = numeros;
    int *ptrmin = &valorMinimo;
    int *ptrmax = &valorMaximo;
    int *ptrt = &tamanho;



    printf("Digite 5 numeros: \n");
    pulaLinha();

    for(int i = 0; i < 5; i++){
        printf("digite o %d. numero: \n", i+1);
        scanf(" %d", (ptrn + i));

    }

    pulaLinha();

    /*
    etapa apenas para testar estou lendo corretamente
    for(int i = 0; i < 5; i++){
        printf(" %d", *(ptrn + i));
    }
    */


     verificaValores(ptrn, tamanho, ptrmin, ptrmax);
     printf("o maior valor: \n");
     printf(" %d", *ptrmax);

     pulaLinha();

     printf("o menor valor é: \n");
     printf(" %d", *ptrmin);


    return 0;
}

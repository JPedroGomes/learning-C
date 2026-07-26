#include <stdio.h>
#include <stdlib.h>

 int main(){
    int quantidade, *p;

    printf("informe a quantidade de elementos para o vetor: ");
    scanf("%d", &quantidade);

    p = (int*)malloc(quantidade * sizeof(int));

    for(int i = 0; i < quantidade; i++){
        printf("imforme o valor para a posição %d do vetor: ", i);
        scanf("%d", &p[i]);
    }

    for(int i = 0; i < quantidade; i++){
        printf("No vetor 'numeros[%d]' está o valor %d: \n", i ,p[i]);

    }

    printf("A variavel 'p' ocupa %ld bytes em memória. \n", quantidade * sizeof(int));

    free(p);
    p = NULL;


 return 0;
 }

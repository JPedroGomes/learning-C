#include <stdio.h>

int main(){

FILE *arq;
char nome[100], *resultado;

arq = fopen("arquivo.txt", "r");

if(arq){
   while(!feof(arq)){//feof - File end of fine.
        resultado = fgets(nome, 100, arq);
        printf("resultado: %d\n", resultado);
        if(resultado){
            printf("%sz\n", nome);
        }

   }
    }
else{
    printf("não achei o arquivo");
}

fclose(arq);

return 0;
}

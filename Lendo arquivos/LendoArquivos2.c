#include <stdio.h>

int main(){

FILE *arq;
char c;

arq = fopen("arquivo.txt", "r");

if(arq){
   while((c = getc(arq)) != EOF){//EOF - End of File // Fim do arquivo
    printf("%c", c);
    }
   }
else{
    printf("não achei o arquivo");
}



return 0;
}

#include <stdio.h>

int main(){
    FILE *arq;

    /*para abrir um arquivo use o fopen(nome, forma de abertura)
    Formas:
    w - Abrir o arquivo para escrita(se ele já existir, será sobescrito)
    r - Abrir o arquivo para leitura (NÃO podemos escrever no arquivo)
    wa - abrir o arquivo para edição de conteudo

    */

    arq = fopen("arquivo.txt", "w");

    //Sempre que a gente finalizar a manipulação, devemos fechar o arquivo
    fclose(arq);

    return 0;
}

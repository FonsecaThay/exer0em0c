/*Escreva um programa em C que copie o conteúdo de um arquivo para outro
arquivo.*/
#include <stdio.h>

int main() {
    FILE *arq_origem, *arq_destino;
    char nome_arq_origem[100], nome_arq_destino[100], c;

    printf("Digite o nome do arquivo de origem: ");
    scanf("%s", nome_arq_origem);

    printf("Digite o nome do arquivo de destino: ");
    scanf("%s", nome_arq_destino);

    // abrindo o arquivo de origem para leitura
    arq_origem = fopen(nome_arq_origem, "r");
    if (arq_origem == NULL) {
        printf("Erro ao abrir o arquivo de origem!");
        return 1;
    }

    // criando o arquivo de destino para escrita
    arq_destino = fopen(nome_arq_destino, "w");
    if (arq_destino == NULL) {
        printf("Erro ao criar o arquivo de destino!");
        return 1;
    }

    // copiando o conteúdo do arquivo de origem para o arquivo de destino
    while ((c = fgetc(arq_origem)) != EOF) {
        fputc(c, arq_destino); 
    }

    printf("Arquivo copiado com sucesso!");

    // fechando os arquivos
    fclose(arq_origem);
    fclose(arq_destino);

    return 0;
}

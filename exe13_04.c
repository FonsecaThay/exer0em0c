/*Faça um programa para software básico em C que leia o tamanho de um vetor do teclado, faça a alocação dinamicamente do vetor e preencha com números 
aleatórios de compreendidos entre 1 e 50. Use função.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, tam;
    int *vetor;
    printf("Tamanho do vetor: ");
    scanf("%d", &tam);
    vetor = malloc(tam * sizeof(int));
    srand(time(NULL));
    for (i = 0; i < tam; i++) {
        vetor[i] = rand() % 50 + 1;
    }
    for (i = 0; i < tam; i++) {
        printf("%d\n", vetor[i]);
    }
    free(vetor);
    return 0;
}

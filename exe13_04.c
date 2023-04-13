/*Faça um programa para software básico em C que leia o tamanho de um vetor do teclado, faça a alocação dinamicamente do vetor e preencha com números 
aleatórios de compreendidos entre 1 e 50. Use função.*/
#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main() {
    int tam;
    int *vetor;
    printf("Tamanho do vetor: ");
    scanf("%d", &tam);
    vetor = malloc(tam * sizeof(int));
    vetor_randomico(vetor, tam);
    return 0;
}

"funcao.h"
    void vetor_randomico(int *vetor, int tam){
    for(int i = 0; i<= tam; i++){
        vetor[i] = rand() %50;
        printf("%d\n", vetor[i]);
    }
}

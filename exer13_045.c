/*Escreva um programa de software básico em C que conte o número de
caracteres em uma string fornecida pelo usuário.*/
#include <stdio.h>
#include <string.h>

int main(){
    char stringA[100];
    printf("String A: %s", stringA);
    scanf("%s", stringA);
    printf("tamanho da string A: %lu\n\n", strlen(stringA));
    
    return 0;
    
}


  
 

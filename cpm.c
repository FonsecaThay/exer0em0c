#include <stdio.h>
#include <string.h>

int main(){
     char stringA[12] = "Computacao";
     char stringB[12] = "Computador";
     scanf("String A: %s\n", stringA);
     scanf("String B: %s\n", stringB);
     printf("Valor 1º comparação: %d\n\n ", strcmp(stringA, stringB));
     
     char stringC[12] = "ABB";
     char stringD[12] = "ABB";
     printf("String C: %s\n", stringC);
     printf("String D: %s\n", stringD);
     printf("Valor 2º comparação: %d\n\n ", strcmp(stringC, stringD));
     
    return 0;
    
}

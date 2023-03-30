#include <stdio.h>
#include <string.h>

int main(){
    size_t num = 5;
    char stringA[20] = "Computacao";
    char stringB[20] = "Computador";
    printf("String A: %s\n", stringA);
    printf("String B: %s\n", stringB);
    printf("Valor 1º comparação: %d\n\n ", strncmp(stringA, stringB, num));
     
    return 0;
    
}

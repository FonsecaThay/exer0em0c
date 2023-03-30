#include <stdio.h>
#include <string.h>

int main(){
     char stringA[15];
     char atringB[15];
     scanf("String A: %s", stringA);
     scanf("String B: %s", stringB);
     
     strcat(stringA, stringB);
     printf("%s", stringA);
     
    return 0;
    

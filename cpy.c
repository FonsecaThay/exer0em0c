#include <stdio.h>
#include <string.h>

int main(){
     char fonte[15] = "Curso_Java";
     char destino[50] = "Curso_C";
     printf("String fonte: %s\n", fonte);
     printf("String destino: %s\n", destino);
     
     strcpy(destino, fonte);
     printf("Após a cópia ser realizada: %s \n", destino);
     
    return 0;
    

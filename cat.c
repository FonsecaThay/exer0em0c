#include <stdio.h>
#include <string.h>

int main(){
     char resultado[50] = "AULA ";
     printf("%s\n", resultado);
     
     strcat(resultado, "DE SOFTWARE ");
     printf("%s\n", resultado);
      
     strcat(resultado, "BÁSICO ");
     printf("%s\n", resultado);
     
     char curso[10] = "EM C";
     strcat(resultado, curso);
     printf("%s", resultado);
     
    return 0;
    
}

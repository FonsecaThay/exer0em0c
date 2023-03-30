#include <stdio.h>
#include <string.h>

int main(){
    char listaNomes[][20] = {"Maria","João","Marcia", "Nadia"};
    char comparacao[] = "Ma";
    printf("Imprimindo nomes que começam com: %s\n", comparacao);
    
    for(int i = 0; i < 4; i++){
        if(strncmp(listaNomes[i], comparacao, 2) == 0){
            printf("%s\n", listaNomes[i]);
        }
    }
     
    return 0;
    
}

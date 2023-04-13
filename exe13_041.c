/*Escreva um programa em C que calcule a data e hora daqui a um determinado número de segundos fornecido pelo usuário.*/
#include <stdio.h>
#include <time.h>
int main(){
    int seg;
    
    printf("Digite os segundos:");
    scanf("%d", &seg);
    
    time_t now = time(0);//hora atual
    
    now += seg;//add segundos
    
    char* time_str = ctime(&now);//tempo em str
    
    printf("A data e hora %d segundos a partir de agora será: %s", seg, time_str);

    return 0;
}

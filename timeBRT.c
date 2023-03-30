#include <stdio.h>
#include <time.h>
/*definindo o UTC/GMT do Brasil e do Japão*/
#define BRT -3
#define JAP 9

int main(){
    time_t tempo;
    time(&tempo);
    struct tm *tempoT = gmtime(&tempo);
    printf("Horário no Japão: %02d:%02d:%02d\n"
           "Horário no Brasil: %02d:%02d:%02d\n",
           tempoT->tm_hour + JAP, tempoT->tm_min,
           tempoT->tm_sec, tempoT->tm_hour + BRT,
           tempoT->tm_min, tempoT->tm_sec);
     
    return 0;
}

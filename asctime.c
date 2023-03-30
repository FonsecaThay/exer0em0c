#include <stdio.h>
#include <time.h>
int main() {
    struct tm tempo;
    
    tempo.tm_sec = 55;
    tempo.tm_min = 59;
    tempo.tm_hour = 23;
    tempo.tm_mday = 12 - 1;
    tempo.tm_year = 2023 - 1900;
    tempo.tm_wday = 3;
    
     printf("%s", asctime(&tempo));
     
    return 0;
}

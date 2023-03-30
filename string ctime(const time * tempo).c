#include <stdio.h>
#include <time.h>
int main() {
    time_t tempo;
    time(&tempo);
    
    printf("%s", ctime(&tempo));
     
    return 0;
}

#include <stdio.h>
#include <time.h>
int main() {
    printf("Pulsos de clock: %ld\n", clock());
    printf("\n");
    printf("Mais um teste da quantidade de pulsos de clock:%ld\n", clock());
    return 0;
}

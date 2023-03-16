#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    struct tm t;
    
    t.tm_sec = 00;
    t.tm_min = 00;
    t.tm_hour = 10;
    t.tm_mday = 16;
    t.tm_mon = 2;
    t.tm_year = 123;
    t.tm_wday = 4;
    
    printf("%s", asctime(&t));

    return 0;
}

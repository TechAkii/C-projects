#include <stdio.h>
#include <time.h>

int main() {
    time_t s = time(NULL);
    struct tm* current_time = localtime(&s);

    printf("Current Time: %02d:%02d:%02d\n", 
           current_time->tm_hour, current_time->tm_min, current_time->tm_sec);

    return 0;
}

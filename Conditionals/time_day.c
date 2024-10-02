#include <stdio.h>
#include <time.h>

int hour;

int main(void){
    time_t now;
    struct tm*now_tm;

    now = time(NULL);
    now_tm = localtime(&now);
    hour = now_tm->tm_hour;
    printf("%d\n", hour);

    if (hour <= 12){
        printf("Good mroning\n");
    }else if (hour <= 18){
        printf("Good afternoon\n");
    }else if (hour <= 20){
        printf("Good evening! :)\n");
    }else{
        printf("GOOD NIGHT >:)\n");
    }

    return 0;
}
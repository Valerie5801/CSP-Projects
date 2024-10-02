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
        printf("Good mroning -n-\n");
    }else if (hour <= 18){
        printf("Good afternoon OwO\n");
    }else if (hour <= 20){
        printf("GoOd eVeNiNg ovo\n");
    }else{
        printf("GOOD MORNING YAA- >w<\n");
    }

    return 0;
}
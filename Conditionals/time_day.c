#include <stdio.h>
#include <time.h>

int main(void){
    int time = 1700;
    if (time >= 500 && time < 1100){
        printf("Good morning");
    }else if (time >= 1300 && time < 1700){
        printf("Good afternoon");
    }else if (time >= 1700 && time < 2200){
        printf("Good evening");
    }else{
        printf("Good night");
    }

    return 0;
}
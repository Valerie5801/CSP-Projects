#include <stdio.h>

int age = 15;

int main(void){
    if (age>=18){
        printf("You can vote.\n");
    }else if (age>=16){
        printf("You can drive.\n");
    }else if (age==15){
        printf("You can get a learner's permit.\n");
    }else if (age>=5){
        printf("You can go to school.\n");
    }else{
        printf("You can't go to school.\n");
    }

    return 0;
}
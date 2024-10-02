#include <stdio.h>


int main(void){
    int grade;
    printf("What's your grade percent: ");
    scanf("%d", grade);
    if (grade >= 90){
        printf("You have an A :D\n");
    }else if (grade >= 80){
        printf("You have a B :)\n");
    }else if (grade >= 70){
        printf("You have a C :|\n");
    }else if (grade >= 60){
        printf("You have a D :(\n");
    }else{
        printf("You have an F >:(\n");
    }
    return 0;
}
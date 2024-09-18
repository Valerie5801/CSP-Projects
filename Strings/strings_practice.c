#include <stdio.h>

int main(void){
    //assign variable and get name.
    char name[30];
    printf("This will decorate your name.");
    printf("Please tell me your name: \n");
    scanf("%s", name);
    //decorate name.
    printf("<<< %s", name);
    printf(" >>> \n");
    printf("((( %s", name);
    printf(" ))) \n");
    printf("--- %s", name);
    printf(" --- \n");
    printf(":) :) %s", name);
    printf(" :) :) \n");
    printf("### %s", name);
    printf(" ### \n");
    printf("+++ %s", name);
    printf(" +++ \n");
    printf("~~~ %s", name);
    printf(" ~~~ \n");
    printf("=== %s", name);
    printf(" === \n");
    return 0;
}
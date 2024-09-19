#include <stdio.h>
#include <string.h>

int main(void){
    //assign variable and get name.
    char name[30];
    char decorName[] = ":) :)";
    char decorNameTwo[] = ":) :)";
    printf("This will decorate your name. \n");
    printf("Please tell me your name: \n");
    scanf("%s", name);
    //decorate name.
    strcat(decorName, name);
    strcat(decorName, decorNameTwo);
    printf("%s", decorName, "\n");
    return 0;
}
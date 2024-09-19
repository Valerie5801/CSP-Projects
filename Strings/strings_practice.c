#include <stdio.h>
#include <string.h>

int main(void){
    //assign variable and get name.
    char name[30];
    char decorName[50] = "<<<";
    char decorNameTwo[] = ">>>";
    printf("This will decorate your name. \n");
    printf("Please tell me your name: ");
    scanf("%s", name);
    //decorate name.
    strcat(decorName, name);
    strcat(decorName, decorNameTwo);
    printf("%s", decorName, "\n");
    return 0;
}
#include <stdio.h>

void get_name(char name[]){
    printf("Hello %s\n", name);
}

int main(void){
    get_name("Mari");
    get_name("Basil");
    get_name("Aubrey");
    get_name("Hero");
    get_name("Kel");
    return 0;
}
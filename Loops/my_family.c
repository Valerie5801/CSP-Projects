#include <stdio.h>
char members[3][20] = {"Ellyana", "Vilas", "Valerie"};

int main(void){
    int i;
    for(i=0;i<3;i++){
        printf("Hi %s\n", members[i]);
    }
    return 0;
}

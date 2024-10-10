#include <stdio.h>
int i;

int main(void){
    //create a loop that counts to 50

    for(i=1;i<=50;i++){
        
        //replace #'s divisible by 5 and 3 with "FizzBuzz"
        if(i%3==0 && i%5==0){
            printf("FizzBuzz\n");
        }else if(i%3==0){
            //replace #'s divisible by 3 with "Fizz"
            printf("Fizz\n");
        }else if(i%5==0){
            //replace #'s divisble by 5 with "Buzz"
            printf("Buzz\n");
        }else{
            //print all other numbers
            printf("%d\n", i);
        } 
    
    }
    return 0;
}
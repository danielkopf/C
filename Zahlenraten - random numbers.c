#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

 srand(time(NULL));
 int input;
 int random = rand() % 101;
 int count = 0;
 printf( "==Guessing numbers==\n");
 printf("numbers between 0 and 100:\n");
 while (random != input) {
        count++;
        scanf("%d", &input);
    if (input > random){
        printf("Number is smaller...\n");
    }else if (input < random) {
    printf("Number is greater...\n");
    }else{
    printf("That's it! \n");
    printf("Rounds: %d\n", count);
 }
}
}

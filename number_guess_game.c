#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int guess, num;

    srand(time(0));
    num = rand()%10 + 1;

    printf("Guess number (1-10): ");
    scanf("%d",&guess);

    if(guess == num)
        printf("Correct!\n");
    else
        printf("Wrong! Number was %d\n", num);

    return 0;
}

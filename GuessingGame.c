#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0)); //Make sure the number is random everytime, by giving it a random seed determined by the time.:
    int randomNumber = rand() % 50 + 1;
    int guess; 

    //Pointers, for fun, we dont need to use them, but why the fuck not? :D 
    int *ptr = &randomNumber; 
    int *guessptr = &guess; 

    printf("Guess the random number, 1 - 50: "); 
    scanf("%d", &guess); 

    while (*ptr != *guessptr)
    {
        printf(" try again: ");
        scanf("%d", &guess); 

        if(*guessptr >= 51 || *guessptr <= 0){
            printf("\nGuess should be between 0 - 50,");
        }
    }

    printf("Winner! the number was %d", *ptr); 
    return 0;   
}

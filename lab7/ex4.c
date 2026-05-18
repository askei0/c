// Guessing game: read a number until it matches the one you chose
//  (first it can be a hard-coded constant or #define, then use the rand() function).
//   In case of a wrong guess, help if the guess was too small or too big.
//   (Try to give a solution with several types of cycles,
//      or try how the if statements can be replaced with a ternary operator.)
// Complete the guessing program by counting the wrong attempts,
//  then give a text evaluation based on this value!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define WINNER_NUM 123

int main()
{

    // const int correctGuess = 123;
    srand(time(0));
    
    // printf("%ld\n", time(NULL));

    int WINNER_NUM = rand() % 1001;//  

    printf("Correct guess is: %d\n", WINNER_NUM);

    int num, counter = 0;

    do
    {
        scanf("%d", &num);

        if (num > WINNER_NUM)
            printf("Go less\n");
        
        if(num < WINNER_NUM)
            printf("Go Big\n");

        counter++;

    } while (num != WINNER_NUM);

    printf("Congrats\nNum of Guesses: %d\n", counter);
}
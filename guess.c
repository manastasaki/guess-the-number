#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// We try to guess a random number in a series of attempts
// After each failed attempt the program tells us if we aimed too high or too low

int main()
{
    // Declarations
    unsigned char guess, target;
    unsigned int input;

    // Assign a random value as the target of the guessing game
    srand (time (0));
    target = rand ();
    
    while (1)
    {
        // Ask for (read) a number from the terminal
        scanf ("%u", &input);
        guess = input;
    
        // Compare the number that we read with the target number
        // If the guess is equal with the target then we print "You guessed correctly." and we exit the program
        // If the guess is higher than the target then we print "You aimed too high."
        // Else, we print "You aimed too low."
        if (guess == target)
        {
            printf ("You guessed correctly!\n");
            return 0;
        }

        if (guess > target)
            printf ("You aimed too high, try again.\n");
        else
            printf ("You aimed too low, try again.\n");
        
        // Repeat from "Ask for (read)..."
    }
}




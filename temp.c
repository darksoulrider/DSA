#include <stdio.h> // import library output input

int main() // main function
{
    // this constant value is 9 becuase, only 9 values are allowed.
    const int MAX_NUMBERS = 9; // constant int declared here
    int numbers[MAX_NUMBERS];  // create a array of constant number
    int SIZE = 0;              // int SIZE variable created..

    // Read input
    while (1 == 1) // while loop which is always true.. (1==1)
    {
        int num;           // int num variable created..
        scanf("%d", &num); // get the user input into the variable
        if (num < 0)       // if user input is negative, break the loop
        {
            break; // break the loop
        }
        numbers[SIZE] = num; // assign the value to the array's index
        SIZE++;              // increment the SIZE variable to get size of array
    }
    // Check if there are too many numbers
    if (SIZE > MAX_NUMBERS)
    {
        printf("Too many numbers\n"); // print the message to console
        return 0;                     // return the program
    }

    int middle = SIZE / 2;                        // get the middle index of the array
    printf("Middle item: %d\n", numbers[middle]); // print the middle value of the array.

    return 0; // return 0
}

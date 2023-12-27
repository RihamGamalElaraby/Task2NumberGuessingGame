/****************************************************
author: Riham Gamal Elaraby
Email: rehamelaraby2272@gmail.com
Task2: Number Guessing Game
Create a program that asks the user to guess a
number between 1 and 100. The program
should then give hints to the user until they
guess the correct number.
Linked-in:https://www.linkedin.com/in/riham-el-araby-b0bba7159/
****************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Please enter a valid number.\n");
            while (getchar() != '\n');
            continue;
        }
        attempts++;
        if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        }
         else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        }
         else {
            printf("Congratulations! You guessed the correct number %d in %d attempts.\n", secretNumber, attempts);
        }
    } while (guess != secretNumber);

    return 0;
}

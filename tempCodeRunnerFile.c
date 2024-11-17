//Q1.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int yourChoice;
    int computerChoice;
    const char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("Enter your choice:\n");
    printf("0: Rock\n");
    printf("1: Paper\n");
    printf("2: Scissors\n");
    printf("Your choice: ");
    scanf("%d", &yourChoice);
    if (yourChoice < 0 || yourChoice > 2) {
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return 1;
    }
    int Num = rand() % 100;
    if (Num < 33) {
        computerChoice = 0;
    } else if (Num < 66) {
        computerChoice = 1;
    } else {
        computerChoice = 2;
    }
    printf("Your choice: %s\n", choices[yourChoice]);
    printf("Computer's choice: %s\n", choices[computerChoice]);
    if (yourChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((yourChoice == 0 && computerChoice == 2) ||
               (yourChoice == 1 && computerChoice == 0) ||
               (yourChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}

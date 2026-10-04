#include <stdio.h>
#include <string.h>

// Function to handle Door 1 puzzle.
// The player must answer a simple arithmetic question.
int door1Puzzle(void) {
    int answer;

    printf("\n=== Door 1: Number Puzzle ===\n");
    printf("What is 12 + 7? ");
    scanf("%d", &answer);

    if (answer == 19) {
        printf("Correct! Door 1 opens.\n");
        return 1;
    }

    printf("Wrong! The correct answer was 19.\n");
    return 0;
}

// Function to handle Door 2 puzzle.
// The player must choose the even number from a list.
int door2Puzzle(void) {
    int answer;

    printf("\n=== Door 2: Even Number Puzzle ===\n");
    printf("Choose the even number from this list: 3, 8, 9, 11\n");
    printf("Your answer: ");
    scanf("%d", &answer);

    if (answer == 8) {
        printf("Correct! Door 2 opens.\n");
        return 1;
    }

    printf("Wrong! The correct answer was 8.\n");
    return 0;
}

// Function to handle Door 3 puzzle.
// The player must type the correct magic word.
int door3Puzzle(void) {
    char answer[20];

    printf("\n=== Door 3: Word Puzzle ===\n");
    printf("Type the magic word to unlock the door: ");
    scanf("%19s", answer);

    if (strcmp(answer, "OPEN") == 0) {
        printf("Correct! Door 3 opens.\n");
        return 1;
    }

    printf("Wrong! The magic word was OPEN.\n");
    return 0;
}

// Function to handle the final door puzzle.
// The player must answer a famous number question.
int finalDoorPuzzle(void) {
    int answer;

    printf("\n=== Final Door: Final Challenge ===\n");
    printf("What is the answer to the Ultimate Question of Life, the Universe, and Everything? ");
    scanf("%d", &answer);

    if (answer == 42) {
        printf("Excellent! You solved the final puzzle and escaped the magic door maze.\n");
        return 1;
    }

    printf("Wrong! The correct answer was 42.\n");
    return 0;
}

// This function handles the door challenge based on the door number.
int runDoorChallenge(int doorNumber) {
    switch (doorNumber) {
        case 1:
            return door1Puzzle();
        case 2:
            return door2Puzzle();
        case 3:
            return door3Puzzle();
        case 4:
            return finalDoorPuzzle();
        default:
            printf("Invalid door number. Please choose a valid door between 1 and 4.\n");
            return 0;
    }
}

int main(void) {
    int currentDoor = 1;
    int totalDoors = 4;
    int chosenDoor;

    printf("Welcome to the Magic Door Puzzle Game!\n");
    printf("You must solve each door puzzle to progress.\n");
    printf("A wrong answer ends the game.\n\n");

    while (currentDoor <= totalDoors) {
        printf("Current door: %d\n", currentDoor);
        printf("Enter the door number you want to try: ");
        scanf("%d", &chosenDoor);

        // The player must choose the correct current door.
        if (chosenDoor != currentDoor) {
            printf("This is not the current door. You must solve Door %d first.\n", currentDoor);
            continue;
        }

        // Solve the specific puzzle for the chosen door.
        int success = runDoorChallenge(chosenDoor);

        // If the user fails a puzzle, the game ends.
        if (!success) {
            printf("Game Over! You failed a puzzle and could not continue.\n");
            return 0;
        }

        // If the player succeeds, they move to the next door.
        printf("Door %d cleared. Progressing to the next door...\n", currentDoor);
        currentDoor++;
    }

    // If all doors are solved, the player wins.
    printf("Congratulations! You passed all the magic doors and won the game!\n");

    return 0;
}

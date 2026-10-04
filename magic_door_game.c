#include <stdio.h>

// Function to play Door 1 (Easy Level)
// Puzzle: Simple Addition
// Player must answer "5 + 5 = ?"
void door1_easy(int *score) {
    int answer;
    int correct_answer = 10;
    int solved = 0;

    printf("\n========== DOOR 1: EASY ==========\n");
    printf("Puzzle: What is 5 + 5 = ?\n");

    // Loop until the player answers correctly
    while (!solved) {
        printf("Enter your answer: ");
        scanf("%d", &answer);

        // Check if the answer is correct
        if (answer == correct_answer) {
            printf("Correct! Door Open\n");
            *score += 10;  // Add 10 points to score
            printf("Score: %d\n", *score);
            solved = 1;  // Exit the loop
        } else {
            printf("Wrong! Try Again\n");
        }
    }
}

// Function to play Door 2 (Medium Level)
// Puzzle: Secret Code
// Player must enter the secret code "25"
void door2_medium(int *score) {
    int answer;
    int correct_code = 25;
    int solved = 0;

    printf("\n========== DOOR 2: MEDIUM ==========\n");
    printf("Puzzle: Enter the Secret Code\n");

    // Loop until the player enters the correct code
    while (!solved) {
        printf("Enter the code: ");
        scanf("%d", &answer);

        // Check if the code is correct
        if (answer == correct_code) {
            printf("Correct! Door Open\n");
            *score += 20;  // Add 20 points to score
            printf("Score: %d\n", *score);
            solved = 1;  // Exit the loop
        } else {
            printf("Wrong Code! Try Again\n");
        }
    }
}

// Function to play Door 3 (Difficult Level)
// Puzzle: Multiplication
// Player must answer "12 × 3 = ?"
void door3_difficult(int *score) {
    int answer;
    int correct_answer = 36;
    int solved = 0;

    printf("\n========== DOOR 3: DIFFICULT ==========\n");
    printf("Puzzle: What is 12 × 3 = ?\n");

    // Loop until the player answers correctly
    while (!solved) {
        printf("Enter your answer: ");
        scanf("%d", &answer);

        // Check if the answer is correct
        if (answer == correct_answer) {
            printf("Correct! Final Door Open\n");
            *score += 30;  // Add 30 points to score
            printf("Score: %d\n", *score);
            solved = 1;  // Exit the loop
        } else {
            printf("Wrong! Try Again\n");
        }
    }
}

// Main function - Controls the game flow
int main(void) {
    int score = 0;      // Initialize score to 0
    int door = 1;       // Initialize door to 1
    int max_score = 60; // Maximum possible score (10 + 20 + 30)

    // Display welcome message
    printf("\n");
    printf("╔════════════════════════════════════╗\n");
    printf("║  MAGIC DOOR PUZZLE GAME             ║\n");
    printf("║  Solve all 3 doors to escape!       ║\n");
    printf("╚════════════════════════════════════╝\n");
    printf("\nWelcome to the Magic Door Puzzle Game!\n");
    printf("You will face 3 doors with increasing difficulty.\n");
    printf("Solve each puzzle to unlock the next door.\n");
    printf("Maximum Score: %d\n", max_score);

    // Door 1: Easy Level
    // Puzzle: 5 + 5 = ?
    if (door == 1) {
        door1_easy(&score);
        door++;  // Move to next door
    }

    // Door 2: Medium Level
    // Puzzle: Secret Code 25
    if (door == 2) {
        door2_medium(&score);
        door++;  // Move to next door
    }

    // Door 3: Difficult Level
    // Puzzle: 12 × 3 = ?
    if (door == 3) {
        door3_difficult(&score);
        door++;  // Move to next door
    }

    // After all doors are solved
    if (door == 4) {
        printf("\n");
        printf("╔════════════════════════════════════╗\n");
        printf("║        CONGRATULATIONS!             ║\n");
        printf("║   You escaped the Magic Castle!     ║\n");
        printf("╚════════════════════════════════════╝\n");
        printf("\nYou have successfully solved all 3 doors!\n");
        printf("Final Score: %d/%d\n", score, max_score);

        // Display performance message based on score
        if (score == max_score) {
            printf("Perfect! You solved all puzzles without any mistakes!\n");
        } else if (score >= 50) {
            printf("Excellent! You did very well!\n");
        } else if (score >= 40) {
            printf("Good job! You escaped the castle!\n");
        } else {
            printf("You made it! Well done!\n");
        }
    }

    return 0;  // End the program successfully
}

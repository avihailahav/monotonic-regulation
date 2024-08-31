#include <stdio.h>

#define ROWS 18 // Number of rows in the table
#define COLS 8  // Number of columns in the table

#define MONOTONIC 1 // Monotonic condition
#define NOT_MONOTONIC 0 // Not monotonic condition

// Global table representing the regulation conditions from part "d" of the image
int regulationTable[ROWS][COLS] = {
    {1, 0, 0, 1, 0, 1, 0, 1},
    {0, 1, 1, 0, 1, 0, 1, 0},
    {1, 1, 0, 1, 1, 0, 0, 1},
    {0, 0, 1, 0, 1, 1, 1, 0},
    {1, 0, 1, 1, 0, 0, 1, 1},
    {0, 1, 0, 0, 1, 1, 0, 1},
    {1, 1, 1, 0, 0, 1, 1, 0},
    {0, 0, 0, 1, 1, 0, 1, 1},
    {1, 0, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 0, 0, 1, 1},
    {1, 1, 0, 0, 0, 1, 0, 1},
    {0, 0, 1, 1, 1, 0, 0, 1},
    {1, 0, 1, 0, 1, 1, 1, 0},
    {0, 1, 0, 1, 0, 0, 1, 0},
    {1, 1, 1, 1, 0, 1, 0, 1},
    {0, 0, 0, 0, 1, 1, 1, 0},
    {1, 0, 0, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1, 0}
};

// Function to check if a regulation condition is monotonic
int checkMonotonic(int condition[COLS]) {
    for (int i = 0; i < COLS - 1; i++) {
        if (condition[i] > condition[i + 1]) {
            return NOT_MONOTONIC; // Not monotonic
        }
    }
    return MONOTONIC; // Monotonic
}

// Function to print the monotonic conditions
void printMonotonicConditions(int monotonic[ROWS][COLS], int count) {
    printf("Monotonic Regulation Conditions:\n");
    printf("================================\n");
    for (int i = 0; i < count; i++) {
        printf("| ");
        for (int j = 0; j < COLS; j++) {
            printf("%d ", monotonic[i][j]);
        }
        printf("|\n");
    }
    printf("================================\n");
}

int main() {
    int monotonicConditions[ROWS][COLS]; // Array to store monotonic conditions
    int count = 0; // Counter for monotonic conditions

    // Iterate through each row in the table
    for (int i = 0; i < ROWS; i++) {
        // Check if the current row is monotonic
        if (checkMonotonic(regulationTable[i])) {
            // Store the monotonic condition
            for (int j = 0; j < COLS; j++) {
                monotonicConditions[count][j] = regulationTable[i][j];
            }
            count++;
        }
    }

    // Print the monotonic conditions
    printMonotonicConditions(monotonicConditions, count);

    return 0;
}

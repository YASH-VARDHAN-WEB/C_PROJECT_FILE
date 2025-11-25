#include <stdio.h>

int main() {
    int num, leftShift, rightShift;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Left shift by 1 (equivalent to multiplying by 2)
    leftShift = num << 1;

    // Right shift by 1 (equivalent to dividing by 2 for positive numbers)
    rightShift = num >> 1;

    // Display the results with explanations
    printf("\nOriginal number: %d\n", num);
    printf("After left shift by 1 (num << 1): %d\n", leftShift);
    printf("After right shift by 1 (num >> 1): %d\n", rightShift);

    /*
        Explanation:
        num << 1  : Shifts all bits left by 1 position.
                    This doubles the value of num.

        num >> 1  : Shifts all bits right by 1 position.
                    This halves the value of num (for positive numbers).
    */

    return 0;
}

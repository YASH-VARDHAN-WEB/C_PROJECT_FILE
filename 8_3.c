#include <stdio.h>

/*
    Function: updateValues
    ----------------------
    Accepts pointers to two integers.
    Modifies the original variables by using the pointers.

    Parameters:
        int *a  -> pointer to first integer
        int *b  -> pointer to second integer
*/
void updateValues(int *a, int *b) {
    // Modify the values stored at the memory locations of a and b
    *a = *a + 10;     // add 10 to value of a
    *b = *b * 2;      // multiply value of b by 2
}

int main() {
    int x = 5;
    int y = 7;

    printf("Before function call:\n");
    printf("x = %d, y = %d\n", x, y);

    // Pass variables by reference (using their addresses)
    updateValues(&x, &y);

    printf("\nAfter function call:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

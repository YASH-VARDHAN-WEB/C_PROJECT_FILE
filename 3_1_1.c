#include <stdio.h>
int main() {
    float a, b, c;

    printf("Enter three sides of a triangle: "); // Taking input of three sides
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) { // Step 1: Check if triangle is valid
        printf("The triangle is valid.\n");
        // Step 2: Check type of triangle
        // For Equilateral
        if (a == b && b == c) {
        printf("It is an Equilateral triangle.\n");
        }
        // For Isosceles
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        }
        // For Right-angled (using Pythagoras theorem)
        else if ((a * a == b * b + c * c) ||
                 (b * b == a * a + c * c) ||
                 (c * c == a * a + b * b)) {
            printf("It is a Right-angled triangle.\n");
        }
        // Scalene
        else {
            printf("It is a Scalene triangle.\n");
        }
    } else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3, max;

    // Input rectangle 1
    printf("Enter length and breadth of rectangle 1: ");
    scanf("%d %d", &l1, &b1);

    // Input rectangle 2
    printf("Enter length and breadth of rectangle 2: ");
    scanf("%d %d", &l2, &b2);

    // Input rectangle 3
    printf("Enter length and breadth of rectangle 3: ");
    scanf("%d %d", &l3, &b3);

    // Calculate perimeters
    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    // Find the largest perimeter using ternary operator
    max = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);

    // Print which rectangle has the largest perimeter
    if (max == p1)
        printf("Rectangle 1 has the largest perimeter: %d\n", p1);
    else if (max == p2)
        printf("Rectangle 2 has the largest perimeter: %d\n", p2);
    else
        printf("Rectangle 3 has the largest perimeter: %d\n", p3);

    return 0;
}

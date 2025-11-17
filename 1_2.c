#include <stdio.h>

int main() {
    char a;   // single character for name
    int b;    // integer for age

    printf("Enter your Name (only 1 letter): ");
    scanf(" %c", &a);   // %c for character input

    printf("Enter your Age: ");
    scanf("%d", &b);    // %d for integer input

    printf("Your name starts with '%c' and you are %d years old\n", a, b);

    //Sir how can we get a full name stored in char?

    return 0;
}

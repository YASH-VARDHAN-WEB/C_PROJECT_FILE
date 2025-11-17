#include <stdio.h>

int main() {
    int num;                         //Declare Variables
    int pos = 0, neg = 0, zero = 0;  //pos stands for positive & neg for negative
    int choice;

    for(;;) {                                   // infinite loop, will break when user says stop
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;

        printf("Enter 1 to continue or 0 to stop: ");
        scanf("%d", &choice);

        if (choice == 0)
            break;                                                  // exit the loop
    }

    printf("\nTotal Positive numbers: %d", pos);
    printf("\nTotal Negative numbers: %d", neg);
    printf("\nTotal Zeroes: %d\n", zero);

    return 0;
}

#include <stdio.h>

int main() {
    int i, j, num;    // i = row, j = column, num = value to print


    for(i = 0; i < 5; i++) {       // loop for rows
        num = 1;                   // first number in every row is always 1

        for(j = 0; j <= i; j++) {  // loop to print numbers in that row
            printf("%d ", num); 
            num = num * (i - j) / (j + 1); // update number using formula(Chat GPT)
        }

        printf("\n");              // move to new line after each row
    }

    return 0;
}

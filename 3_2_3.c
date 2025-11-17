#include <stdio.h>

int main() {
    int i, n = 1, row = 1;      //n = last row number

    for(i = 1; i <= 6; i++) {   // total numbers to print = 6
        printf("%d ", i);

        if(i == n) {     //check if we reached end of current row
            printf("\n");
            row++;        
            n = n + row;  // next triangle number
        }
    }

    return 0;
}

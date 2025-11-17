#include <stdio.h>

int main() {
    int limit = 20;  // maximum value for numbers
    int a, b, c, d; 
    int sum1, sum2;  // sums of cubes

    printf("Ramanujan numbers up to %d:\n", limit);

    // Loop through all possible first pairs (a, b)
    for(a = 1; a <= limit; a++) {
        for(b = a; b <= limit; b++) { 
            sum1 = a*a*a + b*b*b;  // calculate sum of cubes

            // Loop for second pairs (c, d)
            for(c = 1; c <= limit; c++) {
                for(d = c; d <= limit; d++) {
                    sum2 = c*c*c + d*d*d;  // calculate sum of cubes

                    // Check if sums are equal, and pairs are different
                    if(sum1 == sum2 && (a != c || b != d) ) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}

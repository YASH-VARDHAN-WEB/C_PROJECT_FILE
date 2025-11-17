#include <stdio.h>

int main() {
    float a = 100000;  // a = starting population 
    int year;

    printf("Initial population = %.0f\n\n", a);              
    printf("Year\tPopulation\n");  // \t adds a tab space

    for (year = 1; year <= 10; year++) {
        a = a * 1.10;  // increase by 10%
        printf("%d\t%.0f\n", year, a); // Displays output
    }

    return 0;
}

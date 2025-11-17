#include <stdio.h>

int main() {
    float a, b, d;   // a = weight, b = height, d = BMI

    // Take weight input
    printf("Enter your Weight (in KG): ");
    scanf("%f", &a);

    // Take height input
    printf("Enter your Height (in Meter): ");
    scanf("%f", &b);

    // Calculate BMI 
    d = a / (b * b);

    // Show BMI value 
    printf("Your BMI is %.2f\n", d);

    // Check BMI category using ranges
    if (d < 15) {
        printf("Your category is: Starvation\n");
    }
    else if (d >= 15.1 && d <= 17.5) {
        printf("Your category is: Anorexic\n");
    }
    else if (d >= 17.6 && d <= 18.5) {
        printf("Your category is: Underweight\n");
    }
    else if (d >= 18.6 && d <= 24.9) {
        printf("Your category is: Ideal\n");
    }
    else if (d >= 25 && d <= 25.9) {
        printf("Your category is: Overweight\n");
    }
    else if (d >= 30 && d <= 39.9) {
        printf("Your category is: Obese\n");
    }
    else if (d >= 40) {
        printf("Your category is: Morbidly Obese\n");
    }

    return 0;
}

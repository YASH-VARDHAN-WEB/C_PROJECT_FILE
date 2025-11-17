#include <stdio.h>

int main() {
    float a,b;//Use float to account for decimal values

    printf("Enter temperature in Celsius: ");// Input temperature in Celsius
    scanf("%f", &a);

    b = (a * 9 / 5) + 32;// Conversion Celsius Int Fahrenheit

    printf("%.2f Celsius = %.2f Fahrenheit\n",a,b);// Display result

    return 0;
}

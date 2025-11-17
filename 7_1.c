//  Write a C program that uses functions to perform the following operations:
// a. Reading a complex number.
// b. Writing a complex number.
// c. Addition and subtraction of two complex numbers
// Note: represent complex number using a structure.
#include <stdio.h>
struct Complex // Structure for Complex Number
{
    float real;
    float imaginary;
} c1, c2;

void ReadComplex_1() // Read First Number Using Function
{

    printf("Enter real Part: ");
    scanf("%f", &c1.real);
    printf("Enter imaginary Part: ");
    scanf("%f", &c1.imaginary);
}
void ReadComplex_2() // Read Second Number Using Function
{

    printf("Enter real Part: ");
    scanf("%f", &c2.real);
    printf("Enter imaginary Part: ");
    scanf("%f", &c2.imaginary);
}
void WriteComplex_1() // Write First Complex Number Using Input from User
{

    if (c1.imaginary >= 0)
    {
        printf("Your complex Number: %.2f+%.2fi\n", c1.real, c1.imaginary);
    }
    else
    {
        printf("Your complex Number: %.2f%.2fi\n", c1.real, c1.imaginary);
    }
}
void WriteComplex_2() // Write Second Complex Number Using Input from User
{

    if (c2.imaginary >= 0)
    {
        printf("Your complex Number: %.2f+%.2fi\n", c2.real, c2.imaginary);
    }
    else
    {
        printf("Your complex Number: %.2f%.2fi\n", c2.real, c2.imaginary);
    }
}

void Add() // Add the real and imaginary part Then Display Output
{
    float real, imag;
    real = c1.real + c2.real;
    imag = c1.imaginary + c2.imaginary;
    if (imag >= 0)
    {
        printf("Addition = %.2f+%.2fi\n", real, imag);
    }
    else
    {
        printf("Addition = %.2f%.2fi\n", real, imag);
    }
}
void Sub() // Substract the real and imaginary part Then Display Output
{
    float real, imag;
    real = c1.real - c2.real;
    imag = c1.imaginary - c2.imaginary;
    if (imag >= 0)
    {
        printf("Substraction = %.2f+%.2fi\n", real, imag);
    }
    else
    {
        printf("Substraction = %.2f%.2fi\n", real, imag);
    }
}
int main()
{
    // printf("Enter Your First Imaginary Number:\n ");
    // ReadComplex(c1.real, c1.imaginary);
    // printf("Enter Your First Imaginary Number:\n ");
    // ReadComplex(c2.real, c2.imaginary);

    // printf("Your First Imaginary Number:\n ");
    // WriteComplex(c1.real, c1.imaginary);
    // printf("Your Second Imaginary Number:\n ");
    // WriteComplex(c2.real, c2.imaginary);
    ReadComplex_1();
    ReadComplex_2();
    WriteComplex_1();
    WriteComplex_2();
    Add();
    Sub();

    return 0;
}

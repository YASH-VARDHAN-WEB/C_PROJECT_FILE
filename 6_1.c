// //Develop a recursive and non-recursive function FACT(num) to find the
// factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n)
// = n * FACT(n-1). Using this function, write a C program to compute the
// binomial coefficient. Tabulate the results for different values of n and r with
// suitable messages
#include <stdio.h>

int RecFact(int n) // Recursive Function for Calculating Factorial Of a number
{
    if (n <= 0) // Factorial of 0 = 1
    {
        return 1;
    }

    else
    {
        return n * RecFact(n - 1);
    }
}

int Fact(int num) // Non Recursive Function To calculate Factorial of number
{
    int f = 1;
    if (num == 0) // Factorial of 0 is 1
    {
        return 1;
    }

    else
    {
        for (int i = 1; i <= num; i++) // For loop will multiply the num decreasing it each time by 1 until number is 1
        {
            f = f * i;
        }
        return f;
    }
}

int Binomial(int n, int r) // Binomial co-efficeint using Factorial function we Created Above
{
    return Fact(n) / (Fact(r) * Fact(n - r));
}
int main()
{

    int a, n, r;

    printf("Enter a number to calculate Factorial of: "); // Take Input From User
    scanf("%d", &a);

    printf("Factorial Using Non-Recursive Function: %d\n", Fact(a)); // Display Output
    printf("Factorial Using Recursive Function: %d\n", RecFact(a));

    printf("Enter Value Of n: "); // Calculation Of Binomial Co-efficient
    scanf("%d", &n);
    printf("Enter Value Of r: ");
    scanf("%d", &r);

    printf("Binomial Coefficient: %d", Binomial(n, r));

    return 0;
}

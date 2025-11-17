#include <stdio.h>
int Fibo(int n) // Recursive Function to nth term of Fibonacci Series
{

    if (n == 0) // First Term = 0
    {
        return 0;
    }
    else if (n == 1) // Second Term = 1
    {
        return 1;
    }
    else
    {
        return Fibo(n - 1) + Fibo(n - 2); // After that each term is the sum of its previous 2 terms
    }
}
int main()
{

    int a;

    printf("Enter a Number: "); // Take Input from User
    scanf("%d", &a);

    printf("Fibonacci: %d", Fibo(a)); // Displays Output

    return 0;
}

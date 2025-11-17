#include <stdio.h>
int IsPRIME(int num) // Function to Find Prime Number
{
    if (num <= 1) // If Number is less than Zero return 0
    {
        return 0;
    }
    else
    {
        for (int i = 2; i < num; i++) // if the number is only divisible by itself return 1
        {
            if (num % i == 0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
}
int main()
{
    int a; // Number Given by User

    printf("Enter a Number: "); // Take Input From User
    scanf("%d", &a);

    printf("Prime Numbers before %d:\n", a); // Displays Output
    for (int j = 2; j < a; j++)
    {
        if (IsPRIME(j)) // If number before a is prime print That Number
        {
            printf("%d ", j);
        }
    }

    return 0;
}

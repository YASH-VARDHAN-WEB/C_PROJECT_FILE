#include <stdio.h>
int GCD(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return GCD(num2, num1 % num2);
    }
}
int main()
{
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("GCD of %d and %d is: %d\n", n1, n2, GCD(n1, n2));

    return 0;
}

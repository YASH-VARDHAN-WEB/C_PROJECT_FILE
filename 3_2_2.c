#include <stdio.h>

int main() {
    int num,a;      //Declare Variables

    printf("Enter a number: ");     //Take Input From User
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);

    for (int i = 1; i <= 10; i++) {   
        
        a = num * i;
        printf("%d * %d = %d\n", num, i,a);
    }

    return 0;
}

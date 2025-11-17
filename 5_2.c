#include <stdio.h>

int main() {
    int arr[10];     // Definr array 
    int pos = 0, neg = 0, even = 0, odd = 0;  // counters


    // Input array elements
    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, odd, and even
    for(int i = 0; i < 10; i++) {
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Display results
    printf("\nPositive numbers: %d", pos);
    printf("\nNegative numbers: %d", neg);
    printf("\nEven numbers: %d", even);
    printf("\nOdd numbers: %d", odd);

    return 0;
}

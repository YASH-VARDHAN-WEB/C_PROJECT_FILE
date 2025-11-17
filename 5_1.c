#include <stdio.h>

int main() {
    int a;
    int arr[5];
    int largest, second;
 
    printf("Enter 5 numbers:\n");                // Take input from user

    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];       // Start by assuming first number is the largest
    second = arr[0];

    for(int i = 1; i < 5; i++)  {         // Find the largest number{
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    second = arr[0];        // Find the second largest number
    for(int i = 0; i < 5; i++) {
        if(arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    printf("The second largest number is: %d", second);     //Displays Outpuy

    return 0;
}

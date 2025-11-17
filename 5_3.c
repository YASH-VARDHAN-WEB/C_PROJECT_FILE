#include <stdio.h>

int main() {
    int arr[100], n, num, count = 0;

    printf("Enter the number of elements: "); // Ask user for number of elements
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask for the number to find frequency
    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    // Count occurrences
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            count++;
        }
    }

    // Display result
    printf("The number %d appears %d times in the array.\n", num, count);

    return 0;
}

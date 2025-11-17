#include <stdio.h>

// Global variable 
int g = 10;  // 'g' can be accessed in all functions

int test() {
    // Local variable inside test()
    int l = 20;  // 'l' exists only inside this function
    printf("Local in test: %d\n", l);
    printf("Global in test: %d\n", g);

    return 0; 
}

int main() {
    // Call the test() function
    test();

    // Print global variable from main
    printf("Global in main: %d\n", g);  //You can access the global variable from any function.
    printf("Local in main: %d",l);      //You cannot access a local variable outside its function.

    return 0;
}

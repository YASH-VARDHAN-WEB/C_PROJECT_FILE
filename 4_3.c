#include <stdio.h>

// Function demonstrating a variable inside a code block
int test() {
    {
        int x = 50;  // 'x' is declared inside this inner block
        printf("Block variable: %d\n", x); 
    } // End of block → x goes out of scope 

    // x is not accessible here, outside the block

    return 0; 
}

int main() {
    test();  
    return 0; 
}

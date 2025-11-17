#include <stdio.h>

// Function that demonstrates a static local variable
int test() {
    static int s = 0;   // 's' is a static local variable
    s++;                

    
    printf("Static variable: %d\n", s);

    return 0;           
}


void main() {
    test();  
    test();   
    test();   
}

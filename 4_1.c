#include <stdio.h>
int g = 10;          
int test() {                    //Global Function 
    printf("Global in test: %d\n", g);
    return 0;
}
 int main() {
    printf("Global in main: %d\n", g);
    test();                         //Global function used in main 
    return 0;
}

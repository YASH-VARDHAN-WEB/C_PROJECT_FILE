#include <stdio.h>

/* 
    Function to print the binary representation of a number (8 bits)
*/
void printBinary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);   // Shift right and mask with 1
    }
}

int main() {
    unsigned char a = 12;   // 00001100 in binary
    unsigned char b = 10;   // 00001010 in binary

    unsigned char andResult = a & b;   // Bitwise AND
    unsigned char orResult  = a | b;   // Bitwise OR
    unsigned char notResult = ~a;      // Bitwise NOT

    printf("Value of a = %d => ", a);
    printBinary(a);
    printf("\n");

    printf("Value of b = %d => ", b);
    printBinary(b);
    printf("\n\n");

    // AND Operation
    printf("a & b = %d => ", andResult);
    printBinary(andResult);
    printf("\n");

    // OR Operation
    printf("a | b = %d => ", orResult);
    printBinary(orResult);
    printf("\n");

    // NOT Operation
    printf("~a = %d => ", notResult);
    printBinary(notResult);
    printf("\n");

    return 0;
}

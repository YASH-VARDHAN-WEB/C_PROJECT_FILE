// Perform pointer arithmetic (increment and decrement) on pointers of different
// data types. Observe how the memory addresses change and the effects on
// data access.
#include <stdio.h>
int main()
{
    int inum;
    float fnum;
    char cnum;

    int *intptr = &inum;     // integer Pointer pointing to address of inum
    float *floatptr = &fnum; // Float Pointer pointing to address of fnum
    char *charptr = &cnum;   // Char Pointer pointing to address of cnum

    printf("Int Variable Address: %p\n", inum);
    printf("Int Pointer Address Before Arithmetic Operation : %p\n", *intptr);
    intptr++;
    printf("Int Address After Increment: %p\n", *intptr);
    intptr--;
    printf("Int Address After Decrement: %p\n", *intptr);

    printf("Float Variable Address: %p\n", fnum);
    printf("Float Pointer Address: %p\n", *floatptr);
    floatptr++;
    printf("Float Address After Increment: %p\n", *floatptr);
    floatptr--;
    printf("Float Address After Decrement: %p\n", *floatptr);

    printf("Char Variable Address: %p\n", cnum);
    printf("Char Pointer Address: %p\n", *charptr);
    charptr++;
    printf("Char Address After Increment: %p\n", *charptr);
    charptr--;
    printf("Char Address After Decrement: %p\n", *charptr);

    return 0;
}

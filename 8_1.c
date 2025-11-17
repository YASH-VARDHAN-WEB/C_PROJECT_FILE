// Declare different types of pointers (int, float, char) and initialize them with the
// addresses of variables. Print the values of both the pointers and the variables
// // they point to
#include <stdio.h>
int main()
{
    int inum = 90;
    float fnum = 2.344;
    char cnum = 'Y';

    int *intptr = &inum;     // integer Pointer pointing to address of inum
    float *floatptr = &fnum; // Float Pointer pointing to address of fnum
    char *charptr = &cnum;   // Char Pointer pointing to address of cnum

    printf("Int Variable Value: %d\n", inum);
    printf("Int Pointer value: %d\n", *intptr);

    printf("Float Variable Value: %f\n", fnum);
    printf("Float Pointer value: %f\n", *floatptr);

    printf("Int Variable Value: %c\n", cnum);
    printf("Int Pointer value: %c\n", *charptr);
}

// Create a union containing 6 strings: name, home_address, hostel_address,
// city, state and zip. Write a C program to display your present address.
#include <stdio.h>
union address
{
    char name[50];
    char home_address[80];
    char hostel_address[80];
    char city[15];
    char state[20];
    int zip;

} int main()
{

    printf("Enter Your Name: ");
    scanf("%s", address.name);
    printf("Enter Your Home Address: ");
    scanf("%s", address.home_address);
    printf("Enter Your Name: ");
    scanf("%s", address.hostel_address);
    printf("Enter Your Name: ");
    scanf("%s", address.city);
    printf("Enter Your Name: ");
    scanf("%s", address.state);
    printf("Enter Your Zip: ");
    scanf("%d", address.zip);
}

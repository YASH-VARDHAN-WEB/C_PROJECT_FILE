#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];   // buffer to store user input

    // Open file in write mode
    fp = fopen("user_text.txt", "w");

    // Check if file opening was successful
    if (fp == NULL) {
        printf("Error! Could not create the file.\n");
        return 1;
    }

    // Ask user to enter some text
    printf("Enter text to write into the file:\n");

    /*
        fgets() reads a full line including spaces
        - safer than gets()
        - stops when user presses ENTER
    */
    fgets(text, sizeof(text), stdin);

    // Write the user input to the file
    fprintf(fp, "%s", text);

    // Close the file
    fclose(fp);

    printf("Text written to user_text.txt successfully!\n");

    return 0;
}

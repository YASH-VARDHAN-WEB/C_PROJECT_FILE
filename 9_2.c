#include <stdio.h>

int main() {
    FILE *fp;   // File pointer to handle the file
    char ch;    // Variable to store each character read from the file

    /*
        Open an existing file in "read" mode.
        - "r" means read only.
        - The file must already exist.
        - If the file doesn't exist, fopen() returns NULL.
    */
    fp = fopen("user_text.txt", "r");

    // Check if the file was successfully opened
    if (fp == NULL) {
        printf("Error! Could not open the file.\n");
        return 1;   // Exit the program if file failed to open
    }

    printf("File content:\n\n");

    /*
        Read the file character by character using fgetc().
        - fgetc(fp) reads the next character from the file.
        - It returns EOF (End Of File) when there are no characters left.
    */
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);   // Print each character to the screen
    }

    /*
        Always close the file after finishing reading.
        - This frees system resources.
    */
    fclose(fp);

    return 0;   // Successful program execution
}

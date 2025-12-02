//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    char filename[100];
    char text[500];

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    getchar();

    printf("Enter a line of text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    printf("Text appended successfully.\n");

    fclose(fp);
    return 0;
}
//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    char source[100], destination[100];

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", destination);

    FILE *src = fopen(source, "r");
    FILE *dest = fopen(destination, "w");

    if (src == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }
    if (dest == NULL) {
        printf("Error: Could not open destination file.\n");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dest);

    return 0;
}
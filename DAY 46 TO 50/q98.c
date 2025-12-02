//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char name[MAX];
    printf("Enter a name: ");
    fgets(name, MAX, stdin);
    name[strcspn(name, "\n")] = 0;

    int len = strlen(name);
    int i;

    if (len > 0 && name[0] != ' ') {
        printf("%c.", name[0]);
    }

    for (i = 1; i < len; i++) {
        if (name[i] == ' ' && i + 1 < len && name[i + 1] != ' ') {
            int j = i + 1;
            while (j < len && name[j] != ' ') {
                j++;
            }
            if (j < len) {
                printf("%c.", name[i + 1]);
            } else {
                printf(" %s", &name[i + 1]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}

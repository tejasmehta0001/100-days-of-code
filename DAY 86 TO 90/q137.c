//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role currentRole = USER;   // Change to ADMIN or GUEST to test

    switch (currentRole) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;

        case USER:
            printf("Hello, User! You have limited access.\n");
            break;

        case GUEST:
            printf("Greetings, Guest! Please log in for more features.\n");
            break;

        default:
            printf("Unknown role.\n");
            break;
    }

    return 0;
}
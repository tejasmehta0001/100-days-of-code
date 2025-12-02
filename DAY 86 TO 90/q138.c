//Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    const char* roleNames[] = {
        "ADMIN",
        "USER",
        "GUEST"
    };

    // Loop through all enum values
    for (int r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", roleNames[r], r);
    }

    return 0;
}
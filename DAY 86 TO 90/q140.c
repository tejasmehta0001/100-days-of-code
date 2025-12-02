//Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person person = {"Jordan", FEMALE};

    printf("Name: %s\n", person.name);

    switch (person.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
        default:
            printf("Unknown gender\n");
            break;
    }

    return 0;
}
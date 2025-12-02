//Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    struct Date join;
};

int main() {
    struct Employee e = {11, "Raj", {12, 05, 2020}};
    printf("%d %s %d-%d-%d", e.id, e.name, e.join.day, e.join.month, e.join.year);
}

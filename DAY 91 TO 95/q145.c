//Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

struct Student topStudent(struct Student s1, struct Student s2) {
    return (s1.marks > s2.marks) ? s1 : s2;
}

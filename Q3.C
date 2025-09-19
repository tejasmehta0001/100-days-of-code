/*QUESTION 3:
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

ANSWER 3:-
*/
#include <stdio.h>

int main(){
    int length=15, breadth=20;

    printf("Perimeter of rectangle is %d\n", 2*length + 2*breadth);

    printf("Area of rectangle is %d\n", length*breadth);
    return 0;
}
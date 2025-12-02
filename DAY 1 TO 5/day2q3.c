//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

void main() {
    
    int length, width, area;

    
    printf("Enter the length of the rectangle: ");
    
    scanf("%d", &length);

   
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);


    printf("The area of the rectangle is: %d", length*width);
    printf("perimeter of rectangle is: %d", 2*(length+width));
}
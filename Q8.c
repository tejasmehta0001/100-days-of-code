/*
QUESTION 8:
Write a program to find and display the sum of the first n natural numbers.
ANSWER:
*/
#include <stdio.h>

int main(){
    int n;
    printf("enter value of n:\n");
    scanf("%d",&n);
    printf("sum of first n natural number is %d\n", (n*n+n)/2 );
    return 0;
}
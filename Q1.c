/*
Question 1:
Write a program to input two numbers and display their sum.
Answer:-
*/
#include <stdio.h>

void main(){
    int a,b, sum;
    
    printf(" enter value of a and b\n");
    scanf("%d %d", &a,&b);
     sum= a+b;
    printf("sum of %d and %d is %d", a,b,sum);
}
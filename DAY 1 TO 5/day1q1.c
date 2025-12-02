// Write a program to input two numbers and display their sum.

#include <stdio.h>
void main() {
int number1, number2, sum;
printf("Enter the first number: ");
scanf("%d", &number1);
printf("Enter the second number: ");
scanf("%d", &number2);
sum = number1 + number2;
printf("The sum of %d and %d is: %d\n", number1, number2, sum);
}
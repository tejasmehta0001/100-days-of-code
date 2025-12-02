//Write a program to input two numbers and display their sum, difference, product, and quotient

#include <stdio.h>
void main() {
int number1, number2;
int sum, difference, product, quotient;
printf("Enter the first number: ");
scanf("%d", &number1);
printf("Enter the second number: ");
scanf("%d", &number2);
sum = number1 + number2;
difference = number1 - number2;
product = number1 * number2;
quotient = number1 / number2;
printf("Sum: %d\n", sum);
printf("Difference: %d\n", difference);
printf("Product: %d\n", product);
printf("Quotient: %d\n", quotient);
}
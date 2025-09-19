/* QUESTION 7:
Write a program to swap two numbers without using a third variable.
ANSWER:
*/
#include<stdio.h>
 int main(){
    int a, b;
    printf("enter first number:\n");
     scanf("%d", &a);

     printf("enter second number:\n");
     scanf("%d", &b);
    
     printf("first and second number before swapping are %d and %d\n", a,b);
         a = (a + b) - (b = a);

         printf("after swapping a=%d and b=%d", a,b);
          
       return 0;
    }
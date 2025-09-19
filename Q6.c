/* QUSTION6:
Write a program to swap two numbers using a third variable
ANSWER:-
*/
#include<stdio.h>
 int main(){
    int a, b, c;
     printf("enter first number:\n");
     scanf("%d", &a);

     printf("enter second number:\n");
     scanf("%d", &b);
    
     printf("first and second number before swapping are %d and %d\n", a,b);
       c=a;
       a=b;
       b=c;
       printf("after swapping a=%d and b=%d\n", a,b);
        return 0;


}
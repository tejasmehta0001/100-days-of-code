/*QUESTION :
Write a program to convert temperature from Celsius to Fahrenheit.

ANSWER:-
*/
#include<stdio.h>
int main(){
    float celsius;
    printf("enter temprature in celsius:\n");
     scanf("%f",&celsius);
     printf("Temprature in fahrenheit is %f", 9/5*celsius + 32);
      return 0;
}
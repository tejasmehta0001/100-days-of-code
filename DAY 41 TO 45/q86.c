//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
void main(){
    char str[100];
    int i = 0, j, isPalindrome = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0'){
        i++;
    }
    if(i > 0 && str[i - 1] == '\n'){
        i--;
    }
    j = i - 1;
    for(int k = 0; k < i / 2; k++){
        if(str[k] != str[j - k]){
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome){
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
}
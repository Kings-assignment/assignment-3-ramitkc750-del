// Write a recursive function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.
#include <stdio.h>	
    #include <string.h>	
    int isPalindrome(char str[], int start, int end) {	
        if (start >= end) {	
            return 1; // Base case	
        }	
        if (str[start] != str[end]) {	
           return 0; // Not a palindrome	
       }	
       return isPalindrome(str, start + 1, end - 1); // Recursive call	
   }	
   int main(void) {	
       char str[100];	
       printf("Enter a string: ");	
       fgets(str, sizeof(str), stdin);	
       size_t length = strlen(str);	
       if (length > 0 && str[length - 1] == '\n') {	
           str[length - 1] = '\0';	
       }	
       if (isPalindrome(str, 0, strlen(str) - 1)) {	
           printf("The string is a palindrome.\n");	
       } else {	
           printf("The string is not a palindrome.\n");	
       }	
       return 0;	
   }	
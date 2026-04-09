// Write a recursive function named calculateBinary that takes an integer n as input and returns its binary representation as a string.
 #include <stdio.h>	
    #include <string.h>	
    void calculateBinary(int n, char binaryStr[], int index) {	
        if (n == 0) {	
            binaryStr[index] = '\0'; // Null-terminate the string	
            return; // Base case: when n is 0, stop recursion	
        }	
        calculateBinary(n / 2, binaryStr, index - 1); // Recursive call for the next bit	
       binaryStr[index] = (n % 2) + '0'; // Convert the bit to a character and store it	
   }	
   int main(void) {	
       int number;	
       printf("Enter an integer: ");	
      scanf("%d", &number);	
       char binaryStr[32]; // Assuming a 32-bit integer	
       calculateBinary(number, binaryStr, 31); // Start from the last index	
       printf("The binary representation of %d is: %s\n", number, binaryStr	
      );	
       return 0;	
   }	
// Write a recursive function named calculateFactorial that takes an integer n as input and returns its factorial.
 #include <stdio.h>	
    unsigned long long calculateFactorial(int n) {	
        if (n < 0) {	
            return 0; // Factorial is not defined for negative numbers	
        }	
        if (n == 0 || n == 1) {	
            return 1; // Factorial of 0 and 1 is 1	
        }	
        return n * calculateFactorial(n - 1); // Recursive call	
    }	
    int main(void) {	
        int number;	
        printf("Enter an integer: ");	
        scanf("%d", &number);	
        unsigned long long result = calculateFactorial(number);	
        if (result == 0) {
           printf("Factorial is not defined for negative numbers.\n");	
       } else {	
           printf("The factorial of %d is: %llu\n", number, result);	
       }	
       return 0;	
   }	
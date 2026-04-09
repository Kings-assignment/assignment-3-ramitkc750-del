// Write a recursive function named calculateGCD that takes two integers a and b as input and returns their greatest common divisor (GCD).
 #include <stdio.h>	
    int calculateGCD(int a, int b) {	
        if (b == 0) {	
            return a; // GCD is found	
        }	
        return calculateGCD(b, a % b); // Recursive call	
    }	
    int main(void) {	
        int num1, num2;	
        printf("Enter the first integer: ");	
        scanf("%d", &num1);	
        printf("Enter the second integer: ");	
        scanf("%d", &num2); 	
        int gcd = calculateGCD(num1, num2); 	
        printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);	
        return 0;	
    }	
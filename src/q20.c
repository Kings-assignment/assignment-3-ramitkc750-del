// Write a function named calculateGCD that takes two integers as input and returns their greatest common divisor (GCD).
 #include <stdio.h>	
    int calculateGCD(int a, int b) {	
        while (b != 0) {	
            int temp = b;	
            b = a % b;	
            a = temp;	
        }	
        return a;	
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
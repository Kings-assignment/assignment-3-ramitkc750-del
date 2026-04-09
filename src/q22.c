// Write a recursive function named calculateFibonacci that takes an integer n as input and returns the nth Fibonacci number. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding numbers.
 #include <stdio.h>	
    unsigned long long calculateFibonacci(int n) {	
        if (n < 0) {	
            return 0; // Fibonacci is not defined for negative numbers	
        }	
        if (n == 0) {	
            return 0; // Fibonacci of 0 is 0	
        }	
        if (n == 1) {
            return 1; // Fibonacci of 1 is 1	
        }	
        return calculateFibonacci(n - 1) + calculateFibonacci(n - 2);	
    }	
    int main(void) {	
        int n;	
        printf("Enter an integer: ");	
        scanf("%d", &n);	
        unsigned long long result = calculateFibonacci(n);	
        if (n < 0) {	
            printf("Fibonacci is not defined for negative numbers.\n");	
        } else {	
            printf("The %dth Fibonacci number is: %llu\n", n, result);	
        }	
        return 0;	
    }
//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.
 #include <stdio.h>	
    unsigned long long factorial(int n) {	
        if (n < 0) {	
            return 0; // Factorial is not defined for negative numbers	
        }	
        unsigned long long result = 1;	
        for (int i = 1; i <= n; i++) {	
            result *= i;	
        }	
        return result;	
    }	
    void calculateFactorialSeries(int n) {	
        printf("Factorial series up to %d:\n", n);	
        for (int i = 0; i <= n; i++) {	
            printf("%d! = %llu\n", i, factorial(i));	
        }	
    }	
    int main(void) {	
        int n;	
        printf("Enter an integer: ");	
        scanf("%d", &n);	
        calculateFactorialSeries(n);
        return 0;	
    }	
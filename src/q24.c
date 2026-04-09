// Write a recursive function named calculatePower that takes two integers base and exponent as input and returns the result of raising the base to the exponent.
 #include <stdio.h>	
    double calculatePower(int base, int exponent) {	
        if (exponent < 0) {	
            return 1 / calculatePower(base, -exponent); // Handle negative exponent	
        }	
        if (exponent == 0) {	
            return 1; // Any number raised to the power of 0 is 1	
        }	
        return base * calculatePower(base, exponent - 1); // Recursive call	
    }	
    int main(void) {	
        int base, exponent;	
        printf("Enter the base: ");	
        scanf("%d", &base);	
        printf("Enter the exponent: ");	
        scanf("%d", &exponent);	
        double power = calculatePower(base, exponent);	
        printf("%d raised to the power of %d is: %.2f\n", base, exponent, power);	
        return 0;	
    }	
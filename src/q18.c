// Write a function named findPrimeNumbers that takes an integer n as input and prints all prime numbers from 1 to n.
 #include <stdio.h>	
    int isPrime(int num) {	
       if (num <= 1) {	
            return 0; // Not prime	
        }	
        for (int i = 2; i <= num / 2; i++) {	
            if (num % i == 0) {	
                return 0; // Not prime	
            }	
        }	
        return 1; // Is prime	
    }	
    void findPrimeNumbers(int n) {	
       printf("Prime numbers from 1 to %d are:\n", n);	
       for (int i = 1; i <= n; i++) {	
           if (isPrime(i)) {	
               printf("%d ", i);	
           }	
       }	
       printf("\n");	
   }	
   int main(void) {	
       int n;	
       printf("Enter an integer: ");	
       scanf("%d", &n);	
       findPrimeNumbers(n);	
       return 0;	
   }	
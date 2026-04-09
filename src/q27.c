// Write a recursive function named printTriangle that takes an integer n as input and prints a triangle of asterisks (*) with n rows.
 #include <stdio.h>	
    void printTriangle(int n) {	
        if (n <= 0) {	
            return; // Base case: when n is 0 or negative, stop recursion	
        }	
        printTriangle(n - 1); // Recursive call to print the upper part of the triangle	
        for (int i = 0; i < n; i++) {	
            printf("* ");	
        }	
        printf("\n"); // Move to the next line after printing each row	
   }	
   int main(void) {	
       int n;	
       printf("Enter the number of rows for the triangle: ");	
      scanf("%d", &n);	
       printTriangle(n);	
       return 0;}	

// Write a function named reverseArray that takes an array of integers as input and reverses the order of the elements in the array.
 #include <stdio.h>	
   void reverseArray(int arr[], int size) {	
        for (int i = 0; i < size / 2; i++) {	
		
           int temp = arr[i];	
            arr[i] = arr[size - 1 - i];	
            arr[size - 1 - i] = temp;	
        }	
    }	
   int main(void) {	
       int numbers[100];	
       int size;	
       printf("Enter the number of elements: ");   	
       scanf("%d", &size);	
       if (size > 100) {	
           printf("Size exceeds the maximum limit of 100.\n");	
           return 1;	
       }	
       printf("Enter %d integers:\n", size);	
       for (int i = 0; i < size; i++) {	
           scanf("%d", &numbers[i]);	
       }	
       reverseArray(numbers, size);	
       printf("Reversed array:\n");	
       for (int i = 0; i < size; i++) {	
           printf("%d ", numbers[i]);	
       }	
       printf("\n");       	
       return 0;	
   }	
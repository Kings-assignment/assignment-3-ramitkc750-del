// Implement a C program to reverse the elements of an array.
#include <stdio.h>

int main(void){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: \n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    printf("The elements of array are:");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
        printf("\n");
    }
    
    for(int i = 0; i < n / 2; i++){
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    
    printf("The reversed array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
}
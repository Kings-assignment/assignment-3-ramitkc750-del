// Write a function named calculateAverage that takes an array of integers as input and returns the average of the numbers.
#include <stdio.h>
double calculateAverage(int arr[], int size) {
    if (size == 0) {
        return 0.0; // Avoid division by zero
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
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
    double average = calculateAverage(numbers, size);
    printf("The average is: %.2f\n", average);
    return 0;
}
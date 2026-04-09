// Write a C program to concatenate two strings without using the built-in string functions.
#include <stdio.h>
int main(void){
    char str1[100], str2[100], result[200];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    int i = 0, j = 0;
    while(str1[i] != '\0' && str1[i] != '\n'){
        result[i] = str1[i];
        i++;
    }
    while(str2[j] != '\0' && str2[j] != '\n'){
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';
    printf("Concatenated string: %s\n", result);
    return 0;
}
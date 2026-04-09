// Implement a C program to reverse a string.
#include <stdio.h>
#include <string.h>
int main(void){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    int length = 0;
    while(str[length] != '\0' && str[length] != '\n'){
        length++;
    }
    
    char reversed[length + 1];
    for(int i = 0; i < length; i++){
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; 
    printf("Reversed string: %s\n", reversed);
    
    return 0;
}
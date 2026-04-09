// Implement a C program to count the occurrence of a specific character in a string.
#include <stdio.h>
#include <string.h>
int main(void){
    char str[100];
    char ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to count: ");
    scanf("%c", &ch);

    int count = 0;
    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++){
        if(str[i] == ch){
            count++;
        }
    }
    printf("The character '%c' occurs %d times in the string.\n", ch, count);
    return 0;
}
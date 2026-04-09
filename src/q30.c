//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.
  #include <stdio.h>	
    int countOccurrences(char str[], char ch, int index) {	
        if (str[index] == '\0' || str[index] == '\n') {	
            return 0; // Base case: end of string	
        }	
        int count = (str[index] == ch) ? 1 : 0; 	
       return count + countOccurrences(str, ch, index + 1); 	
    }	
   int main(void) {	
       char str[100];	
       char ch;	
       printf("Enter a string: ");	
       fgets(str, sizeof(str), stdin);	
       printf("Enter a character to count: ");	
       scanf("%c", &ch);	
       int occurrences = countOccurrences(str, ch, 0); // Start from index 0	
       printf("The character '%c' occurs %d times in the string.\n", ch, occurrences);	
       return 0;	
   }	
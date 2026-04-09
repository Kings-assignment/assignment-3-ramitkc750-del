// Write a recursive function named reverseString that takes a string as input and returns the reversed string.
  #include <stdio.h>	
    #include <string.h>	
    void reverseString(char str[], int start, int end) {	
        if (start >= end) {	
            return;
        }	
        
        char temp = str[start];	
        str[start] = str[end];	
        str[end] = temp;	
       	
       reverseString(str, start + 1, end - 1);	
   }	
   int main(void) {	
       char str[100];	
       printf("Enter a string: ");	
      fgets(str, sizeof(str), stdin);	
       // Remove newline character if present	
       size_t length = strlen(str);	
       if (length > 0 && str[length - 1] == '\n') {	
           str[length - 1] = '\0';	
       }	
       reverseString(str, 0, strlen(str) - 1);	
       printf("Reversed string: %s\n", str);	
       return 0;	
   }	
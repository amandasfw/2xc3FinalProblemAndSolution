#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// What will be the value of the string str after 
// the following statements have been executed?

// strcpy(str, "tire-bouchon");
// strcpy(&str[4], "d-or-wi");
// strcat(str, "ne");

void main() {
    char str[100];
    
    strcpy(str, "tire-bouchon");
    // str is now "tire-bouchon"
    
    strcpy(&str[4], "d-or-wi");
    // Starting at index 4, we copy "d-or-wi"
    // str[0-3] remains "tire"
    // str[4-10] becomes "d-or-wi"
    // str is now "tired-or-wi"
    
    strcat(str, "ne");
    // Append "ne" to the end
    // str is now "tired-or-wine"
    
    printf("Final value: %s\n", str);
    // Answer: "tired-or-wine"
}


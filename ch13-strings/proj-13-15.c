#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Let f be the following function:

int f(char *s, char *t)
{
    char *p1, *p2;

    for (p1 = s; *p1; p1++) {
        for (p2 = t; *p2; p2++)
            if (*p1 == *p2) break;
        if (*p2 == '\0') break;
    }

    return p1 - s;
}

// (a) What is the value of f("abcd", "babc")?
// (b) What is the value of f("abcd", "bcd")?
// (c) In general, what value does f return when passed two strings s and t?

int f(char *s, char *t)
{
    char *p1, *p2;

    for (p1 = s; *p1; p1++) {
        for (p2 = t; *p2; p2++)
            if (*p1 == *p2) break;
        if (*p2 == '\0') break;
    }

    return p1 - s;
}

void main() {
    // (a) f("abcd", "babc")
    // The function finds the first character in s that is NOT in t
    // For "abcd" and "babc": 
    // - 'a' is in "babc" (found 'a')
    // - 'b' is in "babc" (found 'b')
    // - 'c' is in "babc" (found 'c')
    // - 'd' is NOT in "babc" (p2 reaches '\0'), so break
    // Returns index of 'd' = 3
    
    printf("f(\"abcd\", \"babc\") = %d\n", f("abcd", "babc"));
    
    // (b) f("abcd", "bcd")
    // - 'a' is NOT in "bcd" (p2 reaches '\0'), so break
    // Returns index of 'a' = 0
    
    printf("f(\"abcd\", \"bcd\") = %d\n", f("abcd", "bcd"));
    
    // (c) In general, f returns the index of the first character in s
    // that does not appear in t. If all characters in s appear in t,
    // it returns the length of s (index of the null terminator).
    
    printf("\nExplanation:\n");
    printf("The function returns the index of the first character in s\n");
    printf("that does not appear in string t.\n");
}


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Suppose that the macro M has been defined as follows:

// #define M 10

// Which of the following tests will fail?
// (a) #if M
// (b) #ifdef M
// (c) #ifndef M
// (d) #if defined(M)
// (e) #if !defined(M)

#define M 10

void main() {
    // (a) #if M - This will succeed (M is 10, which is non-zero/true)
    #if M
        printf("(a) #if M: SUCCEEDS\n");
    #endif
    
    // (b) #ifdef M - This will succeed (M is defined)
    #ifdef M
        printf("(b) #ifdef M: SUCCEEDS\n");
    #endif
    
    // (c) #ifndef M - This will FAIL (M is defined)
    #ifndef M
        printf("(c) #ifndef M: SUCCEEDS\n");
    #else
        printf("(c) #ifndef M: FAILS (M is defined)\n");
    #endif
    
    // (d) #if defined(M) - This will succeed (M is defined)
    #if defined(M)
        printf("(d) #if defined(M): SUCCEEDS\n");
    #endif
    
    // (e) #if !defined(M) - This will FAIL (M is defined, so !defined(M) is false)
    #if !defined(M)
        printf("(e) #if !defined(M): SUCCEEDS\n");
    #else
        printf("(e) #if !defined(M): FAILS (M is defined)\n");
    #endif
    
    // Answer: (c) and (e) will fail
}


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// (a) Show what the following program will look like after preprocessing. 
// You may ignore any lines added to the program as a result of including 
// the <stdio.h> header.

// (b) What will be the output of this program?

#define N 100

void f(void)
{
#if defined(N)
    printf("N is %d\n", N);
#else
    printf("N is undefined\n");
#endif
}

int main(void)
{
    f();
#ifdef N
#undef N
#endif
    return 0;
}




#define N 100

void f(void)
{
#if defined(N)
    printf("N is %d\n", N);
#else
    printf("N is undefined\n");
#endif
}

int main(void)
{
    f();
#ifdef N
#undef N
#endif
    return 0;
}

// (a) After preprocessing:
// The #define N 100 is processed first
// In function f(), #if defined(N) is true, so it becomes: printf("N is %d\n", 100);
// In main(), #ifdef N is true, so #undef N is processed
// But this doesn't affect the already-processed code in f()

// (b) Output:
// "N is 100"
// The #undef in main() doesn't affect the code that was already preprocessed in f()

void main() {
    // Running the actual code to demonstrate
    f();
    printf("After #undef N in main, calling f() again:\n");
    f();  // Still prints "N is 100" because the preprocessor already processed f()
}


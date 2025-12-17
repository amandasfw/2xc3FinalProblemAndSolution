#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Modify Programming Project 6 from Chapter 10 so that it has separate stack.h and
// stack.c files, as described in Section 15.2

// Project 6 Chapter 10:

// 6.
// Some calculators (notably those from Hewlett-Packard) use a system of writing mathematical 
// expressions known as Reverse Polish Notation (RPN). In this notation, operators are placed 
// after their operands instead of between their operands. For example, 1 + 2 would be written 
// 1 2 + in RPN, and 1 + 2 * 3 would be written 1 2 3 * +. RPN expressions can easily be evaluated 
// using a stack. The algorithm involves reading the operators and operands in an expression from 
// left to right, performing the following actions:

// When an operand is encountered, push it onto the stack.
// When an operator is encountered, pop its operands from the stack, perform the operation on those 
// operands, and then push the result onto the stack.
// Write a program that evaluates RPN expressions. The operands will be single-digit integers. The 
// operators are +, -, *, /, and =. The = operator causes the top stack item to be displayed; afterwards, 
// the stack is cleared, and the user is prompted to enter another expression. The process continues until 
// the user enters a character that is not an operator or operand:

// Enter an RPN expression: 1 2 3 * + =
// Value of expression: 7

// Enter an RPN expression: 5 8 * 4 9 - / =
// Value of expression: -8

// Enter an RPN expression: q

// If the stack overflows, the program will display the message 'Expression is too complex' 
// and terminate. If the stack underflows (because of an expression such as 1 2 + +). the
// program will display the message 'Not enough operands in expression' and terminate.

// Hints: Incorporate the stack code from Section 10.2 into your program. Use
// scanf("%c", &ch) to read the operators and operands.


#include "stack.h"

void main() {
    char ch;
    int operand1, operand2;
    
    printf("Enter an RPN expression: ");
    
    for (;;) {
        scanf(" %c", &ch);
        
        if (ch >= '0' && ch <= '9') {
            // It's an operand - push it onto the stack
            push(ch - '0');
        } else if (ch == '+') {
            operand2 = pop();
            operand1 = pop();
            push(operand1 + operand2);
        } else if (ch == '-') {
            operand2 = pop();
            operand1 = pop();
            push(operand1 - operand2);
        } else if (ch == '*') {
            operand2 = pop();
            operand1 = pop();
            push(operand1 * operand2);
        } else if (ch == '/') {
            operand2 = pop();
            operand1 = pop();
            push(operand1 / operand2);
        } else if (ch == '=') {
            // Display result and clear stack
            printf("Value of expression: %d\n", pop());
            make_empty();
            printf("Enter an RPN expression: ");
        } else {
            // Not an operator or operand - exit
            break;
        }
    }
}


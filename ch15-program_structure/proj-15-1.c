#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// The justify program of Section 15.3 justifies lines 
// by inserting extra spaces between words. The way the 
// write_line function currently works, the words closer 
// to the end of a line tend to have slightly wider gaps 
// between them than the words at the beginning. (For 
// example, the words closer to the end might have three 
// spaces between them, while the words closer to the 
// beginning might be separated by only two spaces.) 
// Improve the program by having write_line alternate 
// between putting the larger gaps at the end of the line 
// and putting them at the beginning of the line.

#define MAX_WORD_LEN 20

int justify()
{
    char word[MAX_WORD_LEN+2];
    int word_len;

    clear_line();
    for (;;) {
        read_word(word, MAX_WORD_LEN+1);
        word_len = strlen(word);
        if (word_len == 0) {
            flush_line();
            return 0;
        }
        if (word_len > MAX_WORD_LEN)
            word[MAX_WORD_LEN] = '*';
        if (word_len + 1 > space_remaining()) {
            write_line();
            clear_line();
        }
        add_word(word);
    }
}


// Solution: Add a static variable to track alternation
// and modify write_line to alternate gap placement

// In the header or before justify():
static bool put_gaps_at_end = true;

// Modified write_line function (conceptual):
// void write_line(void) {
//     int extra_spaces, spaces_to_insert, i;
//     int words = num_words();
//     int chars = line_len();
//     
//     extra_spaces = MAX_LINE_LEN - chars;
//     
//     if (put_gaps_at_end) {
//         // Put larger gaps at the end (original behavior)
//         for (i = 0; i < words - 1; i++) {
//             spaces_to_insert = extra_spaces / (words - 1);
//             if (i < extra_spaces % (words - 1))
//                 spaces_to_insert++;
//             // Insert spaces_to_insert spaces
//         }
//     } else {
//         // Put larger gaps at the beginning
//         for (i = words - 2; i >= 0; i--) {
//             spaces_to_insert = extra_spaces / (words - 1);
//             if ((words - 2 - i) < extra_spaces % (words - 1))
//                 spaces_to_insert++;
//             // Insert spaces_to_insert spaces
//         }
//     }
//     
//     put_gaps_at_end = !put_gaps_at_end; // Alternate
// }

void main() {
    printf("This problem requires modifying the write_line function\n");
    printf("to alternate between putting larger gaps at the end\n");
    printf("and at the beginning of lines.\n");
    printf("A static boolean variable can track the alternation.\n");
}


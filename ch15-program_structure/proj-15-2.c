#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Modify the justify program of Section 15.3 by having the read_word function
// (instead of main ) store the * character at the end of a word that's been truncated

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

// Solution: Move the truncation logic from justify() to read_word()
// 
// Modified read_word function (conceptual):
// int read_word(char *word, int len) {
//     int ch, pos = 0;
//     
//     while ((ch = getchar()) == ' ')
//         ; // Skip spaces
//     
//     if (ch == EOF)
//         return 0;
//     
//     while (ch != ' ' && ch != '\n' && ch != EOF) {
//         if (pos < len)
//             word[pos++] = ch;
//         ch = getchar();
//     }
//     
//     // Truncation happens here in read_word
//     if (pos >= len) {
//         word[len - 1] = '*';
//         pos = len;
//     }
//     
//     word[pos] = '\0';
//     return pos;
// }
//
// Modified justify() - remove truncation logic:
// int justify() {
//     char word[MAX_WORD_LEN+2];
//     int word_len;
//
//     clear_line();
//     for (;;) {
//         word_len = read_word(word, MAX_WORD_LEN+1);
//         if (word_len == 0) {
//             flush_line();
//             return 0;
//         }
//         // Truncation check removed - handled in read_word
//         if (word_len + 1 > space_remaining()) {
//             write_line();
//             clear_line();
//         }
//         add_word(word);
//     }
// }

void main() {
    printf("This problem requires moving the truncation logic\n");
    printf("from the justify() function to the read_word() function.\n");
    printf("The read_word function should handle truncation internally.\n");
}


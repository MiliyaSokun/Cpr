// TOKENIZING MODULE SOURCE
#define _CRT_SECURE NO WARNINGS
#define BUFFER_SIZE 300 //Define buffer size for input words
#include "tokenizing.h"
// VI
void tokenizing(void) { // use function
    // Display message for input
    printf("*** Start of Tokenizing Words Demo ***\n");
    // Initialize variable
    char    words[BUFFER_SIZE];
    char*   nextWord = NULL;
    int     wordsCounter;
    do {   // perform do-while loop
        printf("Type a few words separated by space (q - to quit):\n");
        // Read input words
        fgets(words, BUFFER_SIZE, stdin);
        words[strlen(words) - 1] = '\0'; // Remove newline character
        // condition if not quitting print words
        if (strcmp(words, "q") != 0) {
            nextWord = strtok(words, " "); // First Word
            wordsCounter = 1;
            while (nextWord) { // loop
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " "); // Next Word

            }


        }
    } while (strcmp(words, "q") != 0); // continue until 'q' is entered
    // Display end message
    printf("*** End of Tokenizing Words Deno ***\n\n");
    

}
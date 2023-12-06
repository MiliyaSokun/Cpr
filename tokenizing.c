// TOKENIZING MODULE SOURCE
#define _CRT_SECURE NO WARNINGS // Disable warnings for unsafe functions
#define BUFFER_SIZE 300 // Define buffer size for input words
#include "tokenizing.h" // Include the header file for tokenizing module

// Tokenizing function definition
void tokenizing(void) {
    /* 
    // The following block of code is commented out.
    // Display start message for tokenizing words demo
    printf("* Start of Tokenizing Words Demo *\n");
    // Declare variables
    char    words[BUFFER_SIZE]; // Array to store input words
    char*   nextWord = NULL; // Pointer for the next word
    int     wordsCounter; // Counter for words

    // Start of do-while loop for tokenizing words
    do {
        // Prompt user for input
        printf("Type a few words separated by space (q - to quit):\n");
        // Read input words
        fgets(words, BUFFER_SIZE, stdin);
        // Remove the newline character from the input
        words[strlen(words) - 1] = '\0';
        // Check if the input is not 'q' for quitting
        if (strcmp(words, "q") != 0) {
            // Get the first word
            nextWord = strtok(words, " ");
            wordsCounter = 1;
            // Loop through all words
            while (nextWord) {
                // Print each word with its count
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                // Get the next word
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0); // Continue until 'q' is entered
    // Display end message for tokenizing words demo
    printf("* End of Tokenizing Words Demo *\n\n");
    */

    // Start of tokenizing phrases demo
    printf("* Start of Tokenizing Phrases Demo *\n");
    // Declare variables
    char    phrases[BUFFER_SIZE]; // Array to store input phrases
    char*   nextPhrase = NULL; // Pointer for the next phrase
    int     phrasesCounter; // Counter for phrases

    // Start of do-while loop for tokenizing phrases
    do {
        // Prompt user for input
        printf("Type a few phrases separated by comma (q - to quit):\n");
        // Read input phrases
        fgets(phrases, BUFFER_SIZE, stdin);
        // Remove the newline character from the input
        phrases[strlen(phrases) - 1] = '\0';
        // Check if the input is not 'q' for quitting
        if (strcmp(phrases, "q") != 0) {
            // Get the first phrase
            nextPhrase = strtok(phrases, ",");
            phrasesCounter = 1;
            // Loop through all phrases
            while (nextPhrase) {
                // Print each phrase with its count
                printf("Phrase #%d is \'%s'\n", phrasesCounter++, nextPhrase);
                // Get the next phrase
                nextPhrase = strtok(NULL, ",");
            }
        }
    } while (strcmp(phrases, "q") != 0); // Continue until 'q' is entered
    // Display end message for tokenizing phrases demo
    printf("* End of Tokenizing Phrases Demo *\n\n");
}
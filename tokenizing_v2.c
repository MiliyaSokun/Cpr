// V2 
    pirntf("*** Start of tokenining Phrases Demo ***\n");
    char    phrases[BUFFER_SIZE];
    char*   nextPhrase = NULL;
    int     phrasesCounter;
    do {
        printf("Type a few phrase separated by comma(q - to quit):\n");
        fgets(phrases, BUFFER_SIZE, stdin);
        phrases[strlen(phrases) - 1] = '\0';
        if ((strcmp(phrases, "q") != 0)){
            nextPhrase = strtok(phrases, ",");
            
        }
    }

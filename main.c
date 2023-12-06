// Disable secure function warnings
#define _CRI_SECURE_NO_WARNINGS
// Include the header file for the tokenizing module
#include "tokenizing.h"
// Main function
int main (void)
{

char buff[10];
// Loop
 do{
    // Display options
    printf ("1 - Fundamentals\n");
    printf ("2 - Manipulation\n");
    printf ("3 - Converting\n"); 
    printf ("4 - Tokenizing\n"); 
    printf ("0 - Exit\n");
    printf ("Which module to run? \n");
    fgets (buff, 10, stdin); // Read user input
    switch (buff[0])
    {
    //case '1': fundamentals ();
    //break;
    //case '2': manipulating ();
    //break;
    //case '3': converting ();
    //break;
    case '4': tokenizing();
    break;
    }

} while (buff[0] != '0'); // continue until the user chooses to exit.
return 0;
}

#include <stdio.h>
int main () {

    char string [4] = {'a','b','c','d'}; // If no value is in [] then value is automatically asigned.
                    // No '\0' is added by computer.
    char stringnew [] = "New way to enter characters in a string"; // As compared to above, this is a better way to enter characters into a string. 
                        // In this type of initialization computer automatically adds a '\0'

    string [1] = 'x'; // Updation of value
    printf ("%c\n",string [1]);
                      
    char str [4]; // String is a character array.
    printf ("Enter characters: ");
    for (int i = 0; i < 4; i++) {
        scanf ("%c ",&str [i]);    // Enter value in string using loops
    }

    printf ("\n");

    for (int i = 0; i < 4; i++) {
        printf ("%c ",str [i]);    // Print value in string using loops
    }

    printf ("\n");

    for (int i = 0; i < 4; i++) {
        printf ("%p ",&str [i]);    // Print location string using loops
    }

    printf ("\n");

    for (int i = 0; i < 4; i++) {
        printf ("%d ", str [i]);    // Print ascii of string using loops
    }

    printf ("\n");

    return 0;
}
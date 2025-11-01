#include <stdio.h>
#include <string.h>

int main () {
    char str [] = "College Wallah";

    // Method 1
    printf ("%p\n",str); // Address of first character is the address of whole string

    // Method 2
    char* ptr = str; // ptr now pointing to str[0]
    printf ("%p\n",ptr); // // Address of first character is the address of whole string

    // Printing Through Pointers
    while (*ptr != '\0') { // Fetch the value whose address is stored in 'ptr'
        printf ("%c",*ptr); //By default ptr points ar first character
        ptr++; // Points to next character
    }
    printf ("\n");

    // ***Pointers in normal initialisation***
    char a [] = "Dog";
    char* x = a;
    x = "Cat";
    printf ("%s\n",a); // Dog will be printed because pointer x now points to a new string "Cat"
                       // But string a is still "Dog"
    char* y = a;
    *y = 'L';          // Individual value can be updated.
    printf ("%s\n",a);

    // ***Initialising strings through pointers***
    char* b = "Hello World"; // String formed without any name
    b  = "New World"; // In normal initialisation only individual characters can be changed, a [] = ' '
                      // In pointer initialisation whole string can be changed, but not individual characters.
    printf ("%s\n",b); // "New World" will be printed because the pointer a is now pointing to a new string "New World" & the previous string is dissolved.

    return 0;
}
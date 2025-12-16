#include <stdio.h>
#include <string.h>

int main () {
    char str [100] = "Hello World"; // [] can be blank if you initialise.
                                // Otherwise enter a value if you take input through scanf etc.

    printf ("%s\n",str); // New way to print
    puts (str); // Another way to print i.e. puts function
                // puts automatically prints an *enter*.

    scanf ("%s",str); // New way to take input in the string. Dont use '&'
                      // But only first word will be considered.
                    // To solve use scanf ("%[^\n]s",str) (Not Recommended)

    puts (str); // Only first word is printed.
    getchar ();
    gets (str); // Now entire sentence can be taken input (Recommended)
    puts (str);

    return 0;
}
#include <stdio.h>
#include <string.h>
int main () {
    char str [100]; // Enter a large size

    // Input
    puts ("Enter a string:");
    scanf ("%[^\n]s",str);

    // Print the size
    puts ("The size of the string is: ");
    int i = 0;
    while (str [i] != '\0') {
        i++;
    }
    printf ("%d\n",i);

    for (int j = 0, k = (i-1) ; j<k; j++,k--) {
        int temp = str [j] ;
        str [j] = str [k];
        str [k] = temp;
    }
    printf ("The reverse string is: ");
    printf ("%s\n",str);
    return 0;
}
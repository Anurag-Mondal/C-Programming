#include <stdio.h>
int main () {
    char s1 [] = "Hello World";
    char* s2 = s1; // s2 is a ***Shallow Copy*** of s1
    printf ("%s\n",s2);

    // ***Deep Copy***
    
    int i = 0;
    while (s1[i] != '\0') { // For counting no. of elements in s1
        i++;
    }
    char s3 [i];
    for (int j = 0; j <= (i-1); j++) {
        s3 [j] = s1 [j];
    }
    printf ("%s\n",s3);

    return 0;
}
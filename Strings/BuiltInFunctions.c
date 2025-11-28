#include <stdio.h>
#include <string.h>

int main () {

    // strlen (Finds Length)
    char a [] = "Hello Strlen";
    int length = strlen (a);
    printf ("%d\n",length);

    // strcpy (Copies S1 into S2, Deep Copy)
    char s1 [] = "Hello Strcpy";
    char s2 [13];
    strcpy (s2,s1);
    printf ("%s\n",s2);

    // strcat (Joins b & c)
    char b [] = "Hello ";
    char c [] = "Strcat";
    strcat (b,c);
    printf ("%s\n",b);

    // strcmp (Compares the sizes of two strings)
    // 1 if d > e
    // 0 if d = e
    //-1 if d < e
    char d [] = "Hello";
    char e [] = "Bro";
    int x = strcmp (d,e);
    printf ("%d\n",x); // Will print 1 
    return 0;
}
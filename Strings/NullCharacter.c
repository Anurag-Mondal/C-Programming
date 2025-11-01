#include <stdio.h>
int main () {
    
    char ch = '\0'; // \0 is a null chaaracter. It prints a space.
    printf ("%c\n",ch); // It prints null chatacter i.e blank
    printf ("%d\n",ch); // It prints the ascii value of null ch i.e 0.

    int a = 0;
    char b = (char)a;
    printf ("%c\n",b); // Printing null charater through typecasting.
    printf ("%d\n",b);

    // USE OF NULL CHARACTER

    char string [] = "New way to enter characters in a string";
             // Actually 39 characters but it has 40 characters due to char '\0'
             
    int i = 0;
    while (string[i] != '\0') { // '\0' is automatically added
      printf ("%c",string[i]);
      i++;
    }
    printf("\n");
    
    return 0;
}
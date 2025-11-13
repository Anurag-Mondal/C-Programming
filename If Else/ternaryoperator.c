#include <stdio.h>
int main () {
    int n;
    printf ("Enter a number ");
    scanf ("%d",&n);
    
    // if (n >= 50) {
    //     printf ("GOOD!");
    // }
    // else {
    //     printf ("BAD :("); 
    // }

    (n >= 50) ? printf("GOOD!"):printf("BAD :(");       /*This is a example of ternary operator and 
                                                          multiple line comment*/

    return 0;
}
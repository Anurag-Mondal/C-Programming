#include <stdio.h>  // stdio.h is a library of functions

// Unlimited functions allowed to use 

void australia () {  // Void indicates return nothing to the main function
    printf ("You are in Australia\n");
    return;
}

void england () {  // England must be above main function
    printf ("You are in England\n");
    void america (); // ---> This is function prototype
    america ();              
    return;
}

int main () { // Code always start with main function & it must come only one time
printf ("You are in India\n");
england ();  // *Calling* england function
    return 0;
}

void america () { // This must be present above 'england' function but if we use "Function Prototype" we can place it anywhere!
    printf ("You are in America\n");
    australia ();
    return;
}
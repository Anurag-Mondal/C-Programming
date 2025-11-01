#include <stdio.h>
#include <string.h>

int main () {
    char str [100] = "College";

    // Q.) Insert 'l' at index 2.

    for  (int i = 6; i  >= 2; i--) {
        str [i+1] = str [i];
    }
    str [2] = 'l';
    printf ("%s\n",str);
    
    return 0;
}
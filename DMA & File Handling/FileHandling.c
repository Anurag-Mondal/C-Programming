#include <stdio.h>
int main () {
    FILE* fileptr = fopen ("DMA.txt","r"); // Opening and reading a file
    char str [1000];

    while ( fgets (str,1000,fileptr) != NULL ) { // Reading and printing the values. "If" prints only one line.
    printf ("%s",str); 
    }

    FILE* newfileptr = fopen ("w.txt","w");
    char strr [] = "This is a text fil whose input is given by C";
    fputs (strr,newfileptr);

    fclose (newfileptr);
    return 0;
}
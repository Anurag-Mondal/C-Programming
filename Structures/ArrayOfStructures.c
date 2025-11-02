#include <stdio.h>
#include <string.h>

int main () {
    typedef struct cricketer {
        char name [20];
        int age; 
        int NoOfMatches;   
        float average;
    } cricketer;

    cricketer arr [3]; // cricketer array; arr [0], arr [1], arr [2]
    
    for (int i = 0; i < 3; i++) {
        scanf ("%{^\n]s",arr[i].name);
        scanf ("%d",&arr[i].age);
        scanf ("%d",&arr[i].NoOfMatches);
        scanf ("%f",&arr[i].average);
        getchar (); // It is use to consume the enter, so that scanf in the next loop doesn't read it.
    }
    printf ("\n\n");

    for (int i = 0; i < 3; i++) {
        printf ("Name: %s\n",arr[i].name);
        printf ("Age: %d\n",arr[i].age);
        printf ("No. of matches: %d\n",arr[i].NoOfMatches);
        printf ("Average: %f\n",arr[i].average);
        printf ("\n");
    }

    return 0;
}
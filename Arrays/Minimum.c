#include <stdio.h>
int main () {
    int a [4] = {34,53,64,85};

    int min = a [0]; // Searching Technique

    for (int i = 0; i<= 3; i++) {

        if (a [i] <= min) { // Comparision
            min = a[i];
        }

    }

    printf ("The minimum value is %d",min); // It returns a garbage value.
    
    return 0; 
}

// OR

#include <stdio.h>
#include <limits.h> // Header file

int main () {
    int a [4] = {34,53,64,85};

    int min = INT_MAX; // Its value is 2147483647

    for (int i = 0; i<= 3; i++) {

        if (a [i] <= min) { // Comparision
            min = a[i];
        }

    }

    printf ("The maximum value is %d",min); // It returns a garbage value.
    
    return 0; 
}
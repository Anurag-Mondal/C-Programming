#include <stdio.h>
int main () {
    int a [4] = {34,53,64,85};

    int max = a [0]; // Searching Technique

    for (int i = 0; i<= 3; i++) {

        if (a [i] >= max) { // Comparision
            max = a[i];
        }

    }

    printf ("The maximum value is %d",max); // It returns a garbage value.
    
    return 0; 
}

// OR

#include <stdio.h>
#include <limits.h> // Header file

int main () {
    int a [4] = {34,53,64,85};

    int max = INT_MIN; // Its value is -2147483648

    for (int i = 0; i<= 3; i++) {

        if (a [i] >= max) { // Comparision
            max = a[i];
        }

    }

    printf ("The maximum value is %d",max); // It returns a garbage value.
    
    return 0; 
}
#include <stdio.h>
#include <limits.h>
int main () {
    int a [4] = {65,6,95,46};

    int max = INT_MIN;
    int secondmax = INT_MIN;

    for (int i = 0; i < 4; i++) {
      if (a [i] >= max) {
            max = a[i];
        }
    }

    for (int j = 0; j < 4; j++) {
        if ( a [j] >= secondmax && a [j] != max ) {
            secondmax = a[j];
        }
    }

    printf ("The second maximum value is %d",secondmax); // It returns a garbage value.
    
    return 0; 
}
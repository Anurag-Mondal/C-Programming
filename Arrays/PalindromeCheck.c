#include <stdio.h>
int main () {
    int arr [8] = {1,2,3,4,4,3,2,1};
    int a = 0;
    for (int i = 0, j = 7; i < j; i++, j--) { // Note the use of comma and semicolons
        if (arr [i] != arr [j]) {
            a++;
            break;
        }
    }
        if (a == 0) {
            printf ("The array is palindrome");
        }
        else if (a == 1) { printf ("The array is not palindrome");
        }
    
    return 0;
}

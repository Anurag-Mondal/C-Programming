#include <stdio.h>

void string (char* strr , int n, int m) {
    if (n == 0) return;
    char* p = strr;
    int x = (m-n);
    
    for (int i = x; i <= m; i++) {
        printf ("%c",*(strr+i));
    }

    if (n>1) printf (" -> ");
    string (p, (n-1),m);        // Recursion
    return;
}

int main () {

    char str [100];
    printf ("Enter a word: ");
    gets (str);

    int i = 0; int count = 0;
    while (str [i] != '\0') {
        count ++;
        i++;
    }

    string (str,count,count);
    
    return 0;
}
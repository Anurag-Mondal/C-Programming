#include <stdio.h>
int main () {

    printf ("Alphabets and their corresponding ASCII values are printed below using typecasting\n\n");

    for (int i = 65; i <= 90; i++) {
    char ch = (char)i;
    printf ("%c ---> %d\n",ch,i);
}
    return 0;
}
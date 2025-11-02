#include <stdio.h>
int main () {
    typedef struct date {
        int date;
        int month;
        int year;
    } date;
    
    date a,b,c;

    a.date = 15;
    a.month = 06;
    a.year = 2022;

    b = a; // It is a feature of structures

    c.date = 9;
    c.month = 9;
    c.year = 2005;

    if (a.date == b.date && a.month == b.month && a.year == b.year)     // It cannot be written like if (a == b)
    printf ("a & b are equal\n"); else printf ("a & b are not equal\n");

    if (b.date == c.date && b.month == c.month && b.year == c.year)
    printf ("b & c are equal\n"); else printf ("b & c are not equal\n");

    if (a.date == c.date && a.month == c.month && a.year == c.year)
    printf ("a & c are equal\n"); else printf ("a & c are not equal\n");

    return 0;
}
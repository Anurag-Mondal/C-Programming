#include <stdio.h>
int main () {
    
    int radius;
    printf ("Enter radius : ");
    scanf ("%d",&radius);

    float area,perimeter;
    area = (22.0/7)*radius*radius;
    perimeter = 2 * (22.0/7)*radius;

    printf ("The perimeter of the circle is: %f units\nThe area of the circle is: %f sq. units",perimeter,area);

    return 0;

}
// This program can find the perimeter and area of circle whose radius is given.
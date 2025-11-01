#include <stdio.h>
#include <string.h>

typedef int integer; // int renamed to integer
typedef float real; // float renamed to real
typedef int* pointer; // int* renamed to pointer

int main () {

    integer x = 1;
    integer y = 2;

    // int* m = &x, n = &y;  | The format doesn't work because computer
    // printf ("%p\n",m);    | creates int* m and int n (not int* n),
    // printf ("%p\n",n);    | due to which error is generated.

    // This problem can be solved using typedef.

    pointer a = &x,b = &y;
    printf ("%p\n",a);
    printf ("%p\n",b);
    
    // HOW TO USE TYPEDEF IN STRUCTURES?

    typedef struct pokemon {
        char name [100];
        int attack; 
        int hp;   
        int speed;
        char tier;
    } pokemon;      // 'struct pokemon' renamed to pokemon

    pokemon pikachu;    // No need to write 'struct pokemon pikachu'

    strcpy (pikachu.name,"Pikachu");
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.speed = 'A';

    return 0;
}
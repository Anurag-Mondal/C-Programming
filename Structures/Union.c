#include<stdio.h>
#include<string.h>

typedef union pokemon { // Size of union will be '15' because 15 is the largest size.
    int hp; // 4 bytes
    int speed; // 4 bytes
    int attack; // 4 bytes
    char tier; // 1 byte
    char name[15]; // 15 bytes
} pokemon ;

int main() {
    pokemon pikachu;
    pikachu.hp = 60; // 4 bytes occupied
    pikachu.speed = 100; // Previous 4 bytes cleared and those 4 bytes occupied again
    pikachu.attack = 70; // Previous 4 bytes cleared and those 4 bytes occupied again
    pikachu.tier = 'A'; // Previous 4 bytes cleared and 1 byte occupied again
    strcpy (pikachu.name,"Pikachu"); // Previous 4 bytes cleared and 15 bytes occupied again

    printf ("%d\n",pikachu.hp);
    printf ("%d\n",pikachu.speed);
    printf ("%d\n",pikachu.attack);
    printf ("%c\n",pikachu.tier);
    printf ("%s\n",pikachu.name); // pikachu.name will be printed (Last value is printed)

    return 0;
}
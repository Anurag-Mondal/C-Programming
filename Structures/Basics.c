#include <stdio.h>
int main () {
    struct pokemon {
        int attack;
        int hp;
        int speed;
        char tier;
    } mewtow ;     // Another Way of Declaring

    struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.speed = 'A';

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.speed = 'S';

    mewtow.attack= 60;
    mewtow.hp = 70;
    mewtow.speed = 150;
    mewtow.tier;
    printf ("Enter  Tier of Mewtow: ");
    scanf ("%c",&mewtow.tier);
    printf ("The tier of Mewtow is %c",mewtow.tier);
    hi

    return 0;
}
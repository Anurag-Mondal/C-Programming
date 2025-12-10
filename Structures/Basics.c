#include <stdio.h>
#include <string.h>
int main () {
    struct pokemon { // pokemon is object
        char name [100];
        int attack; 
        int hp;     // attack, hp, speed, tier are classes
        int speed;
        char tier;
    } mewtow ;     // Another Way of Declaring

    struct pokemon pikachu;
    strcpy (pikachu.name,"Pikachu"); // Way to take input in string
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    struct pokemon charizard;
    strcpy (charizard.name,"Charizard"); // Way to take input in string
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';

    // No need to write 'struct pokemon mewtow'
    strcpy (mewtow.name,"Mewtow"); // // Way to take input in string
    mewtow.attack= 60;
    mewtow.hp = 70;
    mewtow.speed = 150;
    mewtow.tier;
    printf ("The name of the pokemon is: %s\n",mewtow.name);
    printf ("Enter  Tier of Mewtow: ");
    scanf ("%c",&mewtow.tier);
    printf ("The tier of Mewtow is %c",mewtow.tier); 

    return 0;
}
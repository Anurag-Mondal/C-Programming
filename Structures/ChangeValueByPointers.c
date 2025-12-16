#include<stdio.h>
#include<string.h>

typedef struct pokemon { 
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon ;

void change (pokemon* p) {
    (*p).speed = 110;
    p->attack = 110;        // Another Method (Method 2)
    p->tier = 'S';          // ''       ''      ''
    strcpy ((p->name),"Pikachuu");
}

int main() {
    pokemon pikachu = {60,60,60,'A',"Pikachu"}; // Another way of initializing a structure
    // pikachu.hp = 60;
    // pikachu.speed = 60;
    // pikachu.attack = 60;
    // pikachu.tier = 'A';
    // strcpy (pikachu.name,"Pikachu");

    printf ("%d\n",pikachu.hp);
    printf ("%d\n",pikachu.speed);
    printf ("%d\n",pikachu.attack);
    printf ("%c\n",pikachu.tier);
    printf ("%s\n",pikachu.name);

    printf ("\n");

    pokemon* x = &pikachu;
    (*x).hp = 70; // Format to change vallue  through pointers (Method 1)
    printf ("%d\n",pikachu.hp); // 70 will be printed

    change (&pikachu); // passing of value by reference
    printf ("%d\n",pikachu.speed);
    printf ("%d\n",pikachu.attack);
    printf ("%c\n",pikachu.tier);
    printf ("%s\n",pikachu.name); 

    return 0;
}
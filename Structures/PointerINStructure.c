#include<stdio.h>
#include<string.h>

typedef struct pokemon { 
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon ;

int main() {
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 60;
    pikachu.attack = 60;
    pikachu.tier = 60;
    strcpy (pikachu.name,"Pikachu");
    pokemon* x = &pikachu;              // Address of hp is the address of string 'pikachu'
    printf ("%p\n",x);  
    
    printf ("%p\n",&pikachu.hp);
    printf ("%p\n",&pikachu.speed);
    printf ("%p\n",&pikachu.attack);
    printf ("%p\n",&pikachu.tier);
    printf ("%p\n",pikachu.name);  // No need to write &pikachu.name
    return 0;
}
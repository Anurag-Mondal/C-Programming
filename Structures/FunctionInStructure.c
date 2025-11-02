#include<stdio.h>
#include<string.h>

typedef struct pokemon { // Global declaration of pokemon datatype
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon ;


void fun (pokemon p) {
    printf ("%d\n",p.hp);
    return;
}

void change (pokemon p) { // It is a new pokemon 'p'
    p.hp = 70;
    return;
}

int main() {
    pokemon pikachu;
    pikachu.hp = 60;
    change (pikachu);       // It is 'pass by value' not 'pass by reference'
    printf ("%d\n",pikachu.hp); // That is why '60' is printed instead of '70'

    fun (pikachu);   
    return 0;
}
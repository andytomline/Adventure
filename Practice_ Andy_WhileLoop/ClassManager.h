#pragma once

class Human // RACE 1
{
public: // Allows the variables listed after to be accessed anywhere the object is visible.
    int health = 10; // This will be the base health. Class will add onto this health so a pointer may be needed.
    int charm = 10; // This represents how characters will respond to the player.
};

class Elf // RACE 2
{
public:
    int health = 7;
    int charm = 13;
};

class Goblin // RACE 3
{
public:
    int health = 12;
    int charm = 8;
};

class Merfolk // RACE 4
{
public:
    int health = 11;
    int charm = 9;
};

class Druid // CLASS 1
{
public:
    int health = 8;
    int power = 5;
    int mana = 7;
    int wealth = 1;
    
};

class Warrior // CLASS 2
{
public:
    int health = 10;
    int power = 10;
    int mana = 0;
    int wealth = 4;
    
};

class Wizard // CLASS 3
{
public:
    int health = 4;
    int power = 2;
    int mana = 10;
    int wealth = 3;
    
};

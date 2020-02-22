// Practice_ Andy_WhileLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include "ClassManager.h"
#include "Player.h"
#include "Goblin_Enemies.h"
//#include "Variables.h"
#include "Path1.h"
#include "goblinCamp.h"

using namespace std;

string NAME; // First name of player.
int RACE; // Choices between Human, Elf, Goblin, Merfolk
int CLASS; // Druid, Wizard, or Warrior
int AGE; // Must be between 18 - 80 inclusive.
int Q_Check;

Player m_Player;

//Function Prototypes


//int character_creation();

int main()
{
    
    

    cout << "Please enter your first name: ";

    getline(cin,NAME); // Gets the user's name and stores it inside NAME
    cout << "Your name is " << NAME << "." << endl; // Displays NAME on screen
    Sleep(1000); // Delays next output by 1000 milliseconds, or 1 second. Replaced all relevent 'system("PAUSE")' from code. 
    cout << "Is that correct? Type 1. for yes, 2. for no." << endl;

    cin >> Q_Check;

    if (Q_Check == 2)
    {
        cout << "Last chance then. Please enter your first name: " << endl;
        cin >> NAME; //Changed from Getline to fix bug. Should allow a new string to be assigned to NAME
        cout << "Your name is " << NAME << "." << endl;
    }

    else
    {
        cout << "Oh good. Let us continue!" << endl;
    }

    Sleep(1000);

    cout << "Welcome " << NAME << " to the World of Dragons, Mages, and Adventurers!" << endl;
    Sleep(2500); // Given more time for longer sentences

	cout << "And how old are you? Please not that players over 80 cannot play due to ageism." << endl;
	cin >> AGE;
	if (AGE >= 80) // Age check
	{
		cout << "You are too old, lady. Go watch a soap and eat cake." << endl; 
		exit(1000); // Forces the program to close
	}

	cout << "Alright " << NAME << ", so you are " << AGE << " years old. Cool." << endl;

	Sleep(3000);

    cout << "Prepare yourself... \nBut first I need to know more about who you are." << endl;
    Sleep(2500);
    cout << "What is your Race? \n1. Human \n2. Elf \n3. Goblin \n4. Merfolk?" << endl; // Inputting numbers instead of class names to avoid confusion
    cin >> RACE;

    switch (RACE) // First switch case to determine race stats and change the player stats. 
    {
    case 1:
    {
        Human m_Human; //Allows access to the Human Class
        cout << "You are a Human. The more common race around this part of the world, Humans are well known and trusted." << endl; //Confirms choice
        m_Player.Max_HP = m_Human.health; //Changing Player Class stats
        m_Player.Current_HP = m_Player.Max_HP;
        m_Player.charm = m_Human.charm;

        //cout << "This is your charm (10): " << m_Player.charm << endl; -- This was to test that the case worked --
        break; // exits case, and skips all other cases. 
    }
    case 2:
    {
        Elf m_Elf;
        cout << "You are an Elf. Less common, but more mystical, you have a way of speaking to people that makes them believe every word." << endl;
        m_Player.Max_HP = m_Elf.health;
        m_Player.Current_HP = m_Player.Max_HP;
        m_Player.charm = m_Elf.charm;

        break;
    }
    case 3:
    {
        Goblin m_Goblin;
        cout << "You are a... Goblin? Cool. That's cool. Sturdier than the Humans you see, but you can't talk for shit." << endl;
        m_Player.Max_HP = m_Goblin.health;
        m_Player.Current_HP = m_Player.Max_HP;
        m_Player.charm = m_Goblin.charm;

        break;
    }
    case 4:
    {
        Merfolk m_Merfolk;
        cout << "You are a Merfolk. More comfortable around the sea, this land is strange to you. Others find your kind very interesting." << endl;
        m_Player.Max_HP = m_Merfolk.health;
        m_Player.Current_HP = m_Player.Max_HP;
        m_Player.charm = m_Merfolk.charm;

        break;
    }
    }


    Sleep(4000);

 

    cout << "Last choice then.\nYour class: \n1. Druid.\n2. Warrior.\n3. Wizard." << endl; // Edited so that it reads better, adding spaces and correcting little errors.
    cin >> CLASS;

    switch (CLASS)
    {
    case 1:
    {
        Druid m_Druid; // Gets access to Druid Class
        cout << "You are a Druid. Protector of the natural world, you'll use Mother Nature's vengence on your foes." << endl;
        m_Player.Max_HP = m_Player.Max_HP + m_Druid.health; //Adds previous health from RACE to CLASS for the total health
        m_Player.Current_HP = m_Player.Max_HP; // Sets Current HP to Maximum
        m_Player.power = m_Druid.power;
        m_Player.mana = m_Druid.mana;
        m_Player.wealth = m_Player.wealth + m_Druid.wealth; //Players start with 3 wealth, so this is added to the CLASS

        Sleep(2000);

        cout << "Please pay attention to the following lines, as they will show you your stats.\nThese can be changed over time, and will be given to you again at that time.\n\n\n\n" << endl;

        Sleep(4000);

        cout << "This is your health: " << m_Player.Current_HP << endl;

        Sleep(1500);

        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods." << endl;

        Sleep(3000);

        cout << "Your Charm is: " << m_Player.charm << "." << endl;

        Sleep(2500);

        cout << "Mana is used to cast spells, which are stronger than your stick." << endl;

        Sleep(4000);

        cout << "Your Mana is: " << m_Player.mana << "." << endl;

        Sleep(2500);

        cout << "Power is how hard you can hit enemies with your stick, or move a big load." << endl;

        Sleep(4000);

        cout << "Your Power is: " << m_Player.power << "." << endl;

        Sleep(2500);

        cout << "Wealth is how many coins you have to spend. Druids only deal with non-metal coins, but you do have some." << endl;

        Sleep(3000);

        cout << "Your Wealth is: " << m_Player.wealth << "." << endl;


        break;
    }

    case 2:
    {
        Warrior m_Warrior;
        cout << "You are a Warrior. Steel is your weapon, and you are no stranger to a fight." << endl;
        m_Player.Max_HP = m_Player.Max_HP + m_Warrior.health;
        m_Player.Current_HP = m_Player.Max_HP;
        m_Player.power = m_Warrior.power;
        m_Player.mana = m_Warrior.mana;
        m_Player.wealth = m_Player.wealth + m_Warrior.wealth;

        Sleep(2000);

        cout << "Please pay attention to the following lines, as they will show you your stats.\nThese can be changed over time, and will be given to you again at that time.\n\n\n\n" << endl;

        Sleep(5000);

        cout << "This is your health: " << m_Player.Current_HP << endl;

        Sleep(3500);

        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl; // 

        Sleep(3500);

        cout << "Mana is used to cast spells, which are stronger than steel. But you'd rather steel than wavey magic. \nYour Mana is: " << m_Player.mana << "." << endl;

        Sleep(3500);

        cout << "Power is how hard you can hit enemies with your sword, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;

        Sleep(3500);

        cout << "Wealth is how many coins you have to spend. As a Warrior, you've earned more than common folk. \nYour Wealth is: " << m_Player.wealth << "." << endl;

        break;
    }

    case 3:
    {
        Wizard m_Wizard;
        cout << "You are a Wizard. Studying many spells has given you magical power that you can use to fight, or manipulate your foes." << endl;
        m_Player.Max_HP = m_Player.Max_HP + m_Wizard.health;
        m_Player.Current_HP = m_Player.Max_HP;
        m_Player.power = m_Wizard.power;
        m_Player.mana = m_Wizard.mana;
        m_Player.wealth = m_Player.wealth + m_Wizard.wealth;

        Sleep(2000);

        cout << "Please pay attention to the following lines, as they will show you your stats.\nThese can be changed over time, and will be given to you again at that time.\n\n\n\n" << endl;

        Sleep(5000);

        cout << "This is your health: " << m_Player.Current_HP << endl;

        Sleep(3500);

        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl;

        Sleep(3500);

        cout << "Mana is used to cast spells, which are stronger than steel. Magic is most certainly better than you \ntrying to weild a sword.\nYour Mana is: " << m_Player.mana << "." << endl;

        Sleep(3500);

        cout << "Power is how hard you can hit enemies with your sword, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;

        Sleep(3500);

        cout << "Wealth is how many coins you have to spend. As a Wizard, you can sometimes earn money doing tricks, \nbut you don't rely on it. \nYour Wealth is: " << m_Player.wealth << "." << endl;

        break;
    }

    default: 
        cout << "Bad input detected. Quitting to save the universe. Praise Google." << endl;
		exit(1000);

        break;

    }

    cout << "Your health is: " << m_Player.Current_HP << endl; // Debugging. Health is still correct here.

    cout << "Here we go " << NAME << ". Onto your new adventure..." << endl;
    system("PAUSE");
    cout << "\n\n\n\n\n\n\n\nHaving lived in the village of Covern for a few years, you grow weary and want some more adventure." << endl;
    Sleep(4000);
    cout << "A guild nearby is hiring, so you decide to take a look.\nInside, the Human you find looks at you and smirks." << endl;
    Sleep(6000);
    cout << "\"I am Radios. You wish to join the Guild of Raknori?\"" << endl;
    Sleep(3000);
    cout << "You nod. There's plenty of help requests on a notice board, but one stands out." << endl; 
    Sleep(5000);
    cout << "\"You have spotted it already. The Dragon's Claw. Someone has taken it and we need it back. Do that and you can join the Guild of Raknori.\"" << endl;
    Sleep(6000);
    cout << "You agree. Radios gives you a bag full of adventuring items, like healing potions and a map." << endl;
    Sleep(3000);
    cout << "The map has a few different areas for you to look at, the nearest being a Goblin camp nearby.\nYou set out immediately, ready for whatever the world throws your way." << endl;
    Sleep(6000);
    cout << "On the way, you are spotted by a Goblin.\nHow do you respond?" << endl;
    Sleep(3000);
    if (RACE == 3)
    {
        cout << "As a Goblin, you can approach this from a unique angle." << endl;
        Sleep(4000);
        cout << "Whenever you can do such a thing, an extra option will appear first." << endl;
        Sleep(3000);
        cout << "58. Say hello, and ask for directions to the camp." << endl;
    }


    cout << "1. Try to stab the Goblin.\n2. Use some mana to cast a spell on the Goblin. \n3. Act natural! Maybe he won't notice me.\n4. Run away." << endl;
    
    int choice1;
    cin >> choice1;

    switch (choice1)
    {
     case 1:
     {
         Goblin_Enemy m_Goblin_Enemy[2]; // gets the Goblin enemy class ready to edit and sets up an array
         cout << "Your health is: " << m_Player.Current_HP << endl; // Debugging.
         int x;
         x = m_Goblin_Enemy[0].health;

         while (x >= 1) // x is the goblin's health. Whilst it is equal to or above 1, the loop automatically keeps running.
         {
             
             cout << "You attack the Goblin, and manage to land a hit." << endl;
             x = x - m_Player.power;
             cout << "Your health is: " << m_Player.Current_HP << endl; // Debugging.

             if (x >= 1)
             {
               
                 cout << "Your current HP: " << m_Player.Current_HP << endl;
                 cout << "The Goblin attack you back, and catches your arm." << endl;
                 m_Player.Current_HP = m_Player.Current_HP - m_Goblin_Enemy[0].attack;
                 cout << "Your current HP is now: " << m_Player.Current_HP << "." << endl;
             }

         }

         cout << "The Goblin falls, dead. Well, that was a good start!" << endl;

         break;
     }
      case 2:
      {
          if (m_Player.mana >= 1)
          {
              cout << "You raise you wand and unleash a small ball of fire." << endl;
              Sleep(2000);
              cout << "It hits the Goblin in the chest, the smell of burning flesh fills the breeze." << endl;
              Sleep(3000);
              cout << "The Goblin lets out a cry before falling to the dirt, dead." << endl;
              --m_Player.mana;
              cout << "Your mana is now: " << m_Player.mana << "." << endl;
          }

          else
          {
              cout << "You raise your sword, willing something to fire out of it..." << endl;
              Sleep(5000);
              cout << "Nothing happens, seems like you don't have any mana!" << endl;
              Sleep(3000);
              cout << "The Goblin runs up to you, smacking your leg as it runs off." << endl;
              Sleep(3000);
              --m_Player.Current_HP;
              cout << "Your Current HP is now: " << m_Player.Current_HP << "." << endl;
          }

          break;
      }
      case 3:
      {
          cout << "You stand still, hoping the Goblin doesn't notice you." << endl;
          Sleep(3000);
          cout << "It notices you, and quickly runs up to you, hurling a rock at you." << endl;
          --m_Player.Current_HP;
          Sleep(2000);
          cout << "Your Current HP is now: " << m_Player.Current_HP << "." << endl;
          Sleep(1000);
          cout << "As you flinch, the Goblin manages to get away!" << endl;

          break;
      }
      case 4:
      {
          cout << "You run away." << endl;
          Sleep(3000);
          cout << "I mean, not exciting but you get away I guess." << endl;

          break;
      }
      case 58:
      {
          cout << "You talk to the Goblin, and ask for directions." << endl;
          Sleep(3000);
          cout << "The Goblin happily points you in the right direction, warning you not to go down the East path." << endl;
          Sleep(6000);
          cout << "After thanking him, you continue on your journey." << endl;

          break;
      }
      default:
      {
          cout << "You idiot. How dare you. I am broken." << endl; 
		  exit(1000);
      }
    }

    
    Path1(m_Player);

	goblinCamp(m_Player);

    
    cout << "Back to main." << endl;

    

   


















}



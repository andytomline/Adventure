//#include <iostream>
//#include <Windows.h>
//#include <string>
//#include <cstdlib>
//#include "Player.h"
//#include "ClassManager.h"
//#include "Variables.h"
//
//
//#ifndef DEFINE_EXTERNS
//#define EXTERN extern
//#else
//#define EXTERN
//#endif
//
//
//using namespace std;
//
//
//
//int character_creation()
//{
//   
//    Player m_Player;
//
//
//    cout << "Please enter your first name: ";
//
//    cin >> NAME; // Gets the user's name and stores it inside NAME
//    cout << "Your name is " << NAME << "." << endl; // Displays NAME on screen
//    Sleep(1000); // Delays next output by 1000 milliseconds, or 1 second. Replaced all relevent 'system("PAUSE")' from code. 
//    cout << "Is that correct? Type 1. for yes, 2. for no." << endl;
//
//    cin >> Q_Check;
//
//    if (Q_Check == 2)
//    {
//        cout << "Last chance then. Please enter your first name: " << endl;
//        cin >> NAME; //Changed from Getline to fix bug. Should allow a new string to be assigned to NAME
//        cout << "Your name is " << NAME << "." << endl;
//    }
//
//    else
//    {
//        cout << "Oh good. Let us continue!" << endl;
//    }
//
//    Sleep(1000);
//
//    cout << "Welcome " << NAME << " to the World of Dragons, Mages, and Adventurers!" << endl;
//    Sleep(2500); // Given more time for longer sentences
//    cout << "Prepare yourself... \nBut first I need to know more about who you are." << endl;
//    Sleep(2500); 
//    cout << "What is your Race? \n1. Human \n2. Elf \n3. Goblin \n4. Merfolk?" << endl; // Inputting numbers instead of class names to avoid confusion
//    cin >> RACE;
//
//    switch (RACE) // First switch case to determine race stats and change the player stats. 
//    {
//    case 1:
//    {
//        Human m_Human; //Allows access to the Human Class
//        cout << "You are a Human. The more common race around this part of the world, Humans are well known and trusted." << endl; //Confirms choice
//        m_Player.Max_HP = m_Human.health; //Changing Player Class stats
//        m_Player.Current_HP = m_Player.Max_HP;
//        m_Player.charm = m_Human.charm;
//
//        //cout << "This is your charm (10): " << m_Player.charm << endl; -- This was to test that the case worked --
//        break; // exits case, and skips all other cases. 
//    }
//    case 2:
//    {
//        Elf m_Elf;
//        cout << "You are an Elf. Less common, but more mystical, you have a way of speaking to people that makes them believe every word." << endl;
//        m_Player.Max_HP = m_Elf.health;
//        m_Player.Current_HP = m_Player.Max_HP;
//        m_Player.charm = m_Elf.charm;
//
//        break;
//    }
//    case 3:
//    {
//        Goblin m_Goblin;
//        cout << "You are a... Goblin? Cool. That's cool. Sturdier than the Humans you see, but you can't talk for shit." << endl;
//        m_Player.Max_HP = m_Goblin.health;
//        m_Player.Current_HP = m_Player.Max_HP;
//        m_Player.charm = m_Goblin.charm;
//
//        break;
//    }
//    case 4:
//    {
//        Merfolk m_Merfolk;
//        cout << "You are a Merfolk. More comfortable around the sea, this land is strange to you. Others find your kind very interesting." << endl;
//        m_Player.Max_HP = m_Merfolk.health;
//        m_Player.Current_HP = m_Player.Max_HP;
//        m_Player.charm = m_Merfolk.charm;
//
//        break;
//    }
//    }
//
//
//    Sleep(4000);
//
//    cout << "And how old are you? Please not that players over 80 cannot play due to ageism." << endl;
//    cin >> AGE;
//
//    /*if (AGE <= 80) ------- Code not needed yet, will probably remove.
//    {
//        cout << "Well done" << endl;
//    }*/
//
//    cout << "Alright " << NAME << ", so you are " << AGE << " years old. Cool." << endl;
//
//    Sleep(3000);
//
//    cout << "Last choice then.\nYour class: \n1. Druid.\n2. Warrior.\n3. Wizard." << endl; // Edited so that it reads better, adding spaces and correcting little errors.
//    cin >> CLASS;
//
//    switch (CLASS)
//    {
//    case 1:
//    {
//        Druid m_Druid; // Gets access to Druid Class
//        cout << "You are a Druid. Protector of the natural world, you'll use Mother Nature's vengence on your foes." << endl;
//        m_Player.Max_HP = m_Player.Max_HP + m_Druid.health; //Adds previous health from RACE to CLASS for the total health
//        m_Player.Current_HP = m_Player.Max_HP; // Sets Current HP to Maximum
//        m_Player.power = m_Druid.power;
//        m_Player.mana = m_Druid.mana;
//        m_Player.wealth = m_Player.wealth + m_Druid.wealth; //Players start with 3 wealth, so this is added to the CLASS
//
//        Sleep(2000);
//
//        cout << "Please pay attention to the following lines, as they will show you your stats.\nThese can be changed over time, and will be given to you again at that time.\n\n\n\n" << endl;
//
//        Sleep(4000);
//
//        cout << "This is your health: " << m_Player.Current_HP << endl;
//
//        Sleep(1500);
//
//        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods." << endl;
//
//        Sleep(3000);
//
//        cout << "Your Charm is: " << m_Player.charm << "." << endl;
//
//        Sleep(2500);
//
//        cout << "Mana is used to cast spells, which are stronger than your stick." << endl;
//
//        Sleep(4000);
//
//        cout << "Your Mana is: " << m_Player.mana << "." << endl;
//
//        Sleep(2500);
//
//        cout << "Power is how hard you can hit enemies with your stick, or move a big load." << endl;
//
//        Sleep(4000);
//
//        cout << "Your Power is: " << m_Player.power << "." << endl;
//
//        Sleep(2500);
//
//        cout << "Wealth is how many coins you have to spend. Druids only deal with non-metal coins, but you do have some." << endl;
//
//        Sleep(3000);
//
//        cout << "Your Wealth is: " << m_Player.wealth << "." << endl;
//
//
//        break;
//    }
//
//    case 2:
//    {
//        Warrior m_Warrior;
//        cout << "You are a Warrior. Steel is your weapon, and you are no stranger to a fight." << endl;
//        m_Player.Max_HP = m_Player.Max_HP + m_Warrior.health;
//        m_Player.Current_HP = m_Player.Max_HP;
//        m_Player.power = m_Warrior.power;
//        m_Player.mana = m_Warrior.mana;
//        m_Player.wealth = m_Player.wealth + m_Warrior.wealth;
//
//        Sleep(2000);
//
//        cout << "Please pay attention to the following lines, as they will show you your stats.\nThese can be changed over time, and will be given to you again at that time.\n\n\n\n" << endl;
//
//        Sleep(5000);
//
//        cout << "This is your health: " << m_Player.Current_HP << endl;
//
//        Sleep(3500);
//
//        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl; // 
//
//        Sleep(3500);
//
//        cout << "Mana is used to cast spells, which are stronger than steel. But you'd rather steel than wavey magic. \nYour Mana is: " << m_Player.mana << "." << endl;
//
//        Sleep(3500);
//
//        cout << "Power is how hard you can hit enemies with your sword, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;
//
//        Sleep(3500);
//
//        cout << "Wealth is how many coins you have to spend. As a Warrior, you've earned more than common folk. \nYour Wealth is: " << m_Player.wealth << "." << endl;
//
//        break;
//    }
//
//    case 3:
//    {
//        Wizard m_Wizard;
//        cout << "You are a Wizard. Studying many spells has given you magical power that you can use to fight, or manipulate your foes." << endl;
//        m_Player.Max_HP = m_Player.Max_HP + m_Wizard.health;
//        m_Player.Current_HP = m_Player.Max_HP;
//        m_Player.power = m_Wizard.power;
//        m_Player.mana = m_Wizard.mana;
//        m_Player.wealth = m_Player.wealth + m_Wizard.wealth;
//
//        Sleep(2000);
//
//        cout << "Please pay attention to the following lines, as they will show you your stats.\nThese can be changed over time, and will be given to you again at that time.\n\n\n\n" << endl;
//
//        Sleep(5000);
//
//        cout << "This is your health: " << m_Player.Current_HP << endl;
//
//        Sleep(3500);
//
//        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl;
//
//        Sleep(3500);
//
//        cout << "Mana is used to cast spells, which are stronger than steel. Magic is most certainly better than you \ntrying to weild a sword.\nYour Mana is: " << m_Player.mana << "." << endl;
//
//        Sleep(3500);
//
//        cout << "Power is how hard you can hit enemies with your sword, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;
//
//        Sleep(3500);
//
//        cout << "Wealth is how many coins you have to spend. As a Wizard, you can sometimes earn money doing tricks, \nbut you don't rely on it. \nYour Wealth is: " << m_Player.wealth << "." << endl;
//
//        break;
//    }
//
//    default: // ----- Need to add an exit or repeat feature. -----
//        cout << "Bad input detected. Quitting to save the universe. Praise Google." << endl;
//
//        break;
//
//    }
//    
//    return 0;
//   
//}
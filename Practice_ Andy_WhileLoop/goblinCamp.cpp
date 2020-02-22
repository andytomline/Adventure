#include <iostream> 
#include <Windows.h>
#include "Player.h"
#include "goblinCamp.h"


using namespace std;

void goblinCamp(Player& m_Player)
{
	cout << "On crest of a hill ahead, you spot the Goblin camp.\nIt has no real easy way in, but you could attack from distance perhaps? \nYou look it over. There are some trees ahead that you could hide in. That gets you within spell range. \nEither that, or knock on the front door." << endl;

	int Choice3;

	cout << "1. Attack from the trees.\n2. Knock politely on the door.\n3. Charge through the entrance with your sword." << endl;

	cin >> Choice3;

	switch (Choice3)
	{

	case 1:
		{

			if (m_Player.mana >= 1)
			{
				cout << "You launch a fiery ball from your fingertips, destroying a large section of the encampment. Goblins squeal away, and you have time to react again." << endl;
			}
			else
			{
				cout << "You raise your hand, and a puff of nothing... \n...\n...\n...\n...\n...\n...\n...\n...\n...\n Cool. Time for another plan!" << endl;
			}
			break;
		}

	case 2:
		{
			cout << "You knock politely. There is a moment of silence, and then a sword smashes through the wood." << endl;
			m_Player.Current_HP = m_Player.Current_HP - 2; // Player loses 2 health
			cout << "Your health is now: " << m_Player.Current_HP << "." << endl; // Displays health
			cout << "Time for a different tactic..." << endl;
			break;
		}

	case 3:
		{
			cout << "You ram the gate..." << endl;
			if (m_Player.power >= 5)
			
			cout << "You hit the door and smash through it, managing to take a Goblin down at the same time!" << endl;
			
			
			
			cout << "You bounce off the wood, but it makes a loud bang. After a brief moment of silence, a sword erupts through the door narrowly missing you. Time for a different plan!" << endl;
			
			break;



		}
	}
}

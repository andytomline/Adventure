#include <iostream> 
#include <Windows.h>
#include "Player.h"
#include "goblinCamp.h"
#include <stdlib.h>


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

	default:
	{
		cout << "What are you doing to me!? Whyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy Okay I'm over it and I am out. Peace. #" << endl;
		exit(3000);
	}
	}
	
	cout << "After your first attempt, you notice that the Goblins are now angry.\nOh boy.\n" << endl;
	cout << "1. When in doubt, attack the incoming Goblins with your sword.\n2. You think that you may be able to scare the others off. Attack the Goblins with a minor spell.\n3. No time to think! Attack the Goblins with a powerful spell.\n4. Peace is always an option. Try to reason with the Goblins." << endl;
	int Choice4;
	cin >> Choice4;

	switch (Choice4)
	{
		case 1:
		{
			m_Player.Current_HP--;
			cout << "You raise your sword, but as you do, a Goblin lands a hit.\nYour health is now: " << m_Player.Current_HP << "." << endl;
			cout << "However. you swing your sword and slay the goblin dead." << endl;
			cout << "You realise there's more than just one...\n1. Swing your sword at another.\n2. Try a spell, see how many that can take out.\n3. Run." << endl;
			cin >> Choice4;
			switch (Choice4)
			{
				case 1:
				{
					cout << "Again, you swing your sword. You slash a Goblin on the spot, and another. Finally, the others see the threat and run." << endl;
				}
				case 2:

				if (m_Player.mana >= 1)
				{
					m_Player.mana--;
					cout << "You mutter words, and your hands fly forward bringing a crackling wave of energy from them.\nThe Goblins ahead are fried on the spot, the remaining ones flee." << endl;
					cout << "Your remaining mana is now: " << m_Player.mana << "." << endl;
				}
				else
				{
					cout << "A puff of nothing. Whoops. Must have no juice in the tank, matey.\nThe Goblins do enjoy you as a nice lunch though." << endl;
					exit(3000);
				}
				case 3: 
				{
					cout << "You run away. Yeah life is cool. But you know that the Goblins are out there.\nYou drink some tea. It's nice.\nBut you are forever a coward.\nThe end." << endl;
					exit(6000);
				}
				default:
				{
					cout << "You are wrong." << endl;
					exit(2000);
				}
			}
	}






	}

}

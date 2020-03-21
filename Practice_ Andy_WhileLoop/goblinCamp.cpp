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
				m_Player.mana--;
				cout << "Your mana is now:" << m_Player.mana << "." << endl;
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
		case 2:
		{
			if (m_Player.mana >= 1)
			{
				
				cout << "You time a spell perfectly, launching a little ball of ice.\nIt hits the closest Goblin, killing it, and scaring the others off.\nYou enter the camp..." << endl;
				m_Player.mana--;
				cout << "You now have " << m_Player.mana << " remaining." << endl;

			}
			else
			{
				cout << "You raise your hands, and puff. Nothing. \nLooks like you ran out of mana!\nAs you consider how badly that went, you notice a sword in your face. You're dead." << endl;
				exit(5000);
			}
		}
		case 3:
		{
			if (m_Player.mana >= 2)
			{
				cout << "You hurl a ball of flames, it takes a lot of energy but the Goblins all fry in the process. \nNow you can casually stroll into the camp and look around!" << endl;
				m_Player.mana--;
				m_Player.mana--;
				cout << "Your mana is now: " << m_Player.mana << "." << endl;
			}
		}
		case 4:
		{
			cout << "You try to talk to the sword sticking out of the door.\nIt seems to go well at first..." << endl;
			if (m_Player.goblinRace == 1)
			{
				cout << "Being a Goblin, they seems understand your plea. One Goblin, called Bork, gives you a book for being so polite. Bork lets you in, and you are free to look around." << endl;
				m_Player.Bork == 1;
			}
			else
			{
				cout << "You attempt to reason with them, but you forget that Goblins have only two languages.\nYou don't know one, but the other stabs you in the face. Oops." << endl;
				exit(8000);
			}


		}
		default:
		{
			cout << "What on earth was that? You dick. You utter dick. You dick Utter. You Cow brain's dick udder. Go away." << endl;
			exit(10000);
		}

	}

	cout << "You have survived so far, which is good. But now you are inside a Goblin camp! Ahh!\nThankfully, other than those posted on the gate, they seem to be out.\nYou look around, but come up short.\nHowever you do find a clue, stating that the Goblin's too treasure to a lovely dragon in the Cave of Avamix..." << endl;
	cout << "Guess you'll have to go there next." << endl;
	cout << "But before you head off, you take a little break and rest up." << endl;
	if (m_Player.Current_HP < m_Player.Max_HP) //Players who are less than maximum health heal 1 health
	{
		++m_Player.Current_HP;
		cout << "Your health is now: " << m_Player.Current_HP << "." << endl;
	}
	m_Player.mana++;
	cout << "Your mana is now: " << m_Player.mana << "." << endl;

	//Add in check to see what class the player is and adjust stats as needed 


	

}

#include <iostream>
#include <windows.h>
#include "Player.h"
#include "Path1.h"


using namespace std;


void Path1(Player& m_Player)
{
	
	
	cout << "The path splits. One way goes East, the other West. Which do you take?" << endl;
	Sleep(2000);
	cout << "1. East\n";
	cout << "2. West" << endl;
	int Choice2;
	cin >> Choice2;

	switch (Choice2)
	{
	case 1:
		{
		cout << "The path is lovely." << endl;
			--m_Player.Current_HP;
			Sleep(4000);
			cout << "Well it was until you got ambushed by the Kolbold tribe.\n";
			Sleep(3000);
			cout << "Thankfully, you manage to get away lightly.\n";
			Sleep(2000);
			cout << "Your HP is now: " << m_Player.Current_HP << "." << endl;
			Sleep(3000);

		break;

		}
	case 2:
		{
			cout << "It's a lovely journey. What a great day." << endl;
			Sleep(3000);

		break;
		}
	}
	

	cout << "After another hour, you run into a strange looking creature." << endl;
	Sleep(4000);
	cout << "It looks like a clothed humanoid frog, but it's not moving." << endl;
	Sleep(4000);
	cout << "Do you:\n";
	cout << "1. Offer it some water.\n2. Drive a knife through it's head.\n3. Make a note to report the body to the authorities and continue.\n4. Poke it, see what happens." << endl;
	cin >> Choice2;


	switch (Choice2)
	{
	case 1:
		
		cout << "You walk up to it and offer it some water." << endl;
		Sleep(2000);
		cout << "Unfortunately, it's dead. No water will help it now." << endl;
		Sleep(2000);
		cout << "Still, least you know you tried." << endl;
		++m_Player.g;

		break;

	case 2:

		cout << "The knife goes through its head. If it wasn't dead already, it is now!" << endl;
		++m_Player.e;

		break;

	case 3:

		cout << "You stroll past, jotting down the scene on a parchment." << endl;
		++m_Player.l;

		break;

	case 4:

		cout << "You prod it..." << endl;
		Sleep(2000);
		cout << "..." << endl;
		Sleep(2000);
		cout << "..." << endl;
		Sleep(2000);
		cout << "..." << endl;
		Sleep(2000);
		cout << "..." << endl;
		Sleep(2000);
		cout << "..." << endl;
		Sleep(2000);
		cout << "..." << endl;
		Sleep(5000);
		cout << "Cool. You carry on." << endl;
		++m_Player.c;

		break;
	}

	//----------------------------------------------------------------------

	//Checks:

	/*cout << "Your scores are:\nG: " << m_Player.g << endl;
	cout << "E: " << m_Player.e << endl;
	cout << "L: " << m_Player.l << endl;
	cout << "C: " << m_Player.c << endl;

	cout << "End." << endl;*/

	//---------------------------------------------------------------------

}
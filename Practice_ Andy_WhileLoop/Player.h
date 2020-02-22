#ifndef PLAYER_H
#define PLAYER_H
// Player stats are stored in this class, which should be modified in the main function with values.

class Player
{
public:
	int Max_HP;
	int Current_HP;
	int charm;
	int power;
	int mana;
	int wealth = 3;
	int books = 1;
	int g;
	int e;
	int l;
	int c;

	Player() 
	{
		
		Max_HP = 2;
		Current_HP = 2;
		charm = 1;
		power = 1;
		mana = 1;
		g = 1;
		e = 1;
		l = 1;
		c = 1;

	}
	
};

//Player m_Player;


#endif PLAYER_H


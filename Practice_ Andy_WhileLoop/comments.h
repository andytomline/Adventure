#pragma once

//if (RACE == 1) //If player is Human...
   //{
   //    if (CLASS == 1) //If player is a Human Druid...
   //    {
   //        cout << "Your name is " << NAME << " and you are " << AGE << " years old." << endl;
   //        Sleep(2000);
   //        cout << "You are a Human and are a practicing Druid. You are a rare breed, and have access to spells as well as limited \nsocial skills. People will trust you, but may not treat you the same as everyone else." << endl; // Cannot do same as above as RACE would display as '1'.
   //        
   //        Sleep(5000);

   //       /* -----------------------------------------------------------------------------------------------------
   //         Tried to use a pointer, however it is not needed.
   //        int* h;
   //        int hp = 0;
   //        Human dlg;
   //        h = &dlg.health;
   //        hp = h + 4;
   //        -----------------------------------------------------------------------------------------------------*/

   //        Human m_Human; //initialises the human class ready to use.
   //        Druid m_Druid;
   //        Player m_Player;
   //        m_Player.Max_HP = m_Human.health + m_Druid.health; // To use a class variable, you must declare it as 'm_class name.variable'. This line stores the data from the human + druid hp, to give the player its hp.
   //        m_Player.Current_HP = m_Human.health + m_Druid.health; // Same line but stores the players current hp, which starts at full.
   //      
   //        

   //        cout << "This is your Maximum HP: " << m_Player.Max_HP << endl;
   //        Sleep(1500);
   //        cout << "This is your Current HP: " << m_Player.Current_HP << endl; // Using this code to display and check both HP for player. They should both result in 18.

   //        Sleep(1500);

   //        m_Player.charm = m_Human.charm;

   //        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods." << endl; 
   //        Sleep(3000);
   //        cout << "Your Charm is: " << m_Player.charm << "." << endl; // Checks charm. Should be '10'.

   //        Sleep(1500);

   //        m_Player.mana = m_Druid.mana;

   //        cout << "Mana is used to cast spells, which are stronger than your stick." << endl;
   //        Sleep(3000);
   //        cout << "Your Mana is: " << m_Player.mana << "." << endl;

   //        Sleep(1500);

   //        m_Player.power = m_Druid.power;

   //        cout << "Power is how hard you can hit enemies with your stick, or move a big load." << endl; 
   //        Sleep(3000);
   //        cout << "Your Power is: " << m_Player.power << "." << endl;

   //        Sleep(1500);

   //        m_Player.wealth = m_Druid.wealth + m_Player.wealth; // Since the Player class has some wealth already, I need to make sure to add that to the equation. The result should be 4.

   //        cout << "Wealth is how many coins you have to spend. Druids only deal with non-metal coins, but you do have some." << endl;
   //        Sleep(3000);
   //        cout << "Your Wealth is: " << m_Player.wealth << "." << endl;

   //    }    

   //    if (CLASS == 2) // Human Warrior
   //    {
   //        cout << "Your name is " << NAME << " and you are " << AGE << " years old." << endl;
   //        cout << "You are a Human and are a fierce Warrior. You may be known around the guards as a good fighter, and no doubt \nhave encountered great battles. Townsfolk respect you, but somethimes can be a little frightened." << endl; // Cannot do same as above as RACE would display as '1'.

   //        Sleep(3000);

   //      
   //        Human m_Human; //initialises the human class ready to use.
   //        Warrior m_Warrior;
   //        Player m_Player;
   //        m_Player.Max_HP = m_Human.health + m_Warrior.health; // To use a class variable, you must declare it as 'm_class name.variable'. This line stores the data from the human + Warrior hp, to give the player its hp.
   //        m_Player.Current_HP = m_Human.health + m_Warrior.health; // Same line but stores the players current hp, which starts at full.



   //        cout << "This is your Maximum HP: " << m_Player.Max_HP << endl;

   //        Sleep(1500);

   //        cout << "This is your Current HP: " << m_Player.Current_HP << endl; 

   //        Sleep(1500);

   //        m_Player.charm = m_Human.charm;

   //        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl; // 

   //        Sleep(1500);

   //        m_Player.mana = m_Warrior.mana;

   //        cout << "Mana is used to cast spells, which are stronger than steel. But you'd rather steel than wavey magic. \nYour Mana is: " << m_Player.mana << "." << endl;

   //        Sleep(1500);

   //        m_Player.power = m_Warrior.power;

   //        cout << "Power is how hard you can hit enemies with your sword, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;

   //        Sleep(1500);

   //        m_Player.wealth = m_Warrior.wealth + m_Player.wealth; 

   //        cout << "Wealth is how many coins you have to spend. As a Warrior, you've earned more than common folk. \nYour Wealth is: " << m_Player.wealth << "." << endl;
   //    }

   //    if (CLASS == 3) // Human Wizard
   //    {
   //        cout << "Your name is " << NAME << " and you are " << AGE << " years old." << endl;
   //        cout << "You are a Human, and a Wizard. As a magical user, you can often find yourself being awed at by crowds, \nbut they may fear you at times. Magic is scary and dangerous, but it could save your life and others." << endl; // Cannot do same as above as RACE would display as '1'.

   //        Sleep(3000);

   //        Human m_Human; 
   //        Warrior m_Wizard;
   //        Player m_Player;
   //        m_Player.Max_HP = m_Human.health + m_Wizard.health; 
   //        m_Player.Current_HP = m_Human.health + m_Wizard.health; 



   //        cout << "This is your Maximum HP: " << m_Player.Max_HP << endl;

   //        Sleep(1500);

   //        cout << "This is your Current HP: " << m_Player.Current_HP << endl; 

   //        Sleep(1500);

   //        m_Player.charm = m_Human.charm;

   //        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl; 

   //        Sleep(1500);

   //        m_Player.mana = m_Wizard.mana;

   //        cout << "Mana is used to cast spells, which are stronger than steel. Magic is most certainly better than you trying to weild a sword.\nYour Mana is: " << m_Player.mana << "." << endl;

   //        Sleep(1500);

   //        m_Player.power = m_Wizard.power;

   //        cout << "Power is how hard you can hit enemies with your sword, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;

   //        Sleep(1500);

   //        m_Player.wealth = m_Wizard.wealth + m_Player.wealth; 

   //        cout << "Wealth is how many coins you have to spend. As a Wizard, you can sometimes earn money doing tricks, but you don't rely on it. \nYour Wealth is: " << m_Player.wealth << "." << endl;
   //    }
   //}

   //if (RACE == 2)
   //{
   //    if (CLASS == 1) // Elf Druid
   //    {
   //        cout << "Your name is " << NAME << " and you are " << AGE << " years old." << endl;
   //        cout << "You are an Elf and are a Druid. You've devoted your time to studying nature, and learning why it \nshould be defended at all costs. Elves are fairly common, but not as much as Humans in this part of the world." << endl; // Cannot do same as above as RACE would display as '1'.

   //        system("pause");


   //        Elf m_Elf;
   //        Druid m_Druid;
   //        Player m_Player;
   //        m_Player.Max_HP = m_Elf.health + m_Druid.health;
   //        m_Player.Current_HP = m_Elf.health + m_Druid.health;



   //        cout << "This is your Maximum HP: " << m_Player.Max_HP << endl;

   //        system("pause");

   //        cout << "This is your Current HP: " << m_Player.Current_HP << endl;

   //        system("pause");

   //        m_Player.charm = m_Elf.charm;

   //        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl;

   //        system("pause");

   //        m_Player.mana = m_Druid.mana;

   //        cout << "Mana is used to cast spells, which are stronger than your faithful stick. Either way, you'll fight.\nYour Mana is: " << m_Player.mana << "." << endl;

   //        system("pause");

   //        m_Player.power = m_Druid.power;

   //        cout << "Power is how hard you can hit enemies with your stick, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;

   //        system("pause");

   //        m_Player.wealth = m_Druid.wealth + m_Player.wealth;

   //        cout << "Wealth is how many coins you have to spend. As a Druid, you'll only accept wooden coins. \nYour Wealth is: " << m_Player.wealth << "." << endl;
   //    }

   //    {
   //        if (CLASS == 2) // Elf Warrior
   //        {
   //            cout << "Your name is " << NAME << " and you are " << AGE << " years old." << endl;
   //            cout << "You are an Elf and are a Warrior. You've devoted your time to studying how to attack with steel.\nElves are fairly common, but not as much as Humans in this part of the world." << endl; // Cannot do same as above as RACE would display as '1'.

   //            system("pause");


   //            Elf m_Elf;
   //            Warrior m_Warrior;
   //            Player m_Player;
   //            m_Player.Max_HP = m_Elf.health + m_Warrior.health;
   //            m_Player.Current_HP = m_Elf.health + m_Warrior.health;



   //            cout << "This is your Maximum HP: " << m_Player.Max_HP << endl;

   //            system("pause");

   //            cout << "This is your Current HP: " << m_Player.Current_HP << endl;

   //            system("pause");

   //            m_Player.charm = m_Elf.charm;

   //            cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl;

   //            system("pause");

   //            m_Player.mana = m_Warrior.mana;

   //            cout << "Mana is used to cast spells, which are useless to you.\nYour Mana is: " << m_Player.mana << "." << endl;

   //            system("pause");

   //            m_Player.power = m_Warrior.power;

   //            cout << "Power is how hard you can hit enemies with your sword, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;

   //            system("pause");

   //            m_Player.wealth = m_Warrior.wealth + m_Player.wealth;

   //            cout << "Wealth is how many coins you have to spend. As a Warrior, you've earned more than common folk.\nYour Wealth is: " << m_Player.wealth << "." << endl;
   //        }

   //        if (CLASS == 3) // Elf Wizard
   //        {
   //            cout << "Your name is " << NAME << " and you are " << AGE << " years old." << endl;
   //            cout << "You are an Elf and are a Wizard. Magic is in your blood, and you use it well.\nElves are fairly common, but not as much as Humans in this part of the world." << endl; // Cannot do same as above as RACE would display as '1'.

   //            system("pause");


   //            Elf m_Elf;
   //            Wizard m_Wizard;
   //            Player m_Player;
   //            m_Player.Max_HP = m_Elf.health + m_Wizard.health;
   //            m_Player.Current_HP = m_Elf.health + m_Wizard.health;



   //            cout << "This is your Maximum HP: " << m_Player.Max_HP << endl;

   //            system("pause");

   //            cout << "This is your Current HP: " << m_Player.Current_HP << endl;

   //            system("pause");

   //            m_Player.charm = m_Elf.charm;

   //            cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl;

   //            system("pause");

   //            m_Player.mana = m_Wizard.mana;

   //            cout << "Mana is used to cast spells, which is all you care about.\nYour Mana is: " << m_Player.mana << "." << endl;

   //            system("pause");

   //            m_Player.power = m_Wizard.power;

   //            cout << "Power is how hard you can hit enemies with your sword, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;

   //            system("pause");

   //            m_Player.wealth = m_Wizard.wealth + m_Player.wealth;

   //            cout << "Wealth is how many coins you have to spend. As a Wizard, you've invested some of your wealth into your studies.\nYour Wealth is: " << m_Player.wealth << "." << endl;
   //        }

   //    }

   //}

   //if (RACE == 3)
   //{
   //    if (CLASS == 1) // Goblin Druid
   //    {
   //        cout << "Your name is " << NAME << " and you are " << AGE << " years old." << endl;
   //        cout << "You are an Goblin and are for some reason also a Druid? I don't know. Maybe you like plants. \nGoblins are usually hostile, but there are a few in the towns and cities.\nPeople may be wary of you but you're used to that." << endl;

   //        system("pause");


   //        Goblin m_Goblin;
   //        Druid m_Druid;
   //        Player m_Player;
   //        m_Player.Max_HP = m_Goblin.health + m_Druid.health;
   //        m_Player.Current_HP = m_Goblin.health + m_Druid.health;



   //        cout << "This is your Maximum HP: " << m_Player.Max_HP << endl;

   //        system("pause");

   //        cout << "This is your Current HP: " << m_Player.Current_HP << endl;

   //        system("pause");

   //        m_Player.charm = m_Goblin.charm;

   //        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl;

   //        system("pause");

   //        m_Player.mana = m_Druid.mana;

   //        cout << "Mana is used to cast spells, which are stronger than your faithful stick. Either way, you'll fight.\nYour Mana is: " << m_Player.mana << "." << endl;

   //        system("pause");

   //        m_Player.power = m_Druid.power;

   //        cout << "Power is how hard you can hit enemies with your stick, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;

   //        system("pause");

   //        m_Player.wealth = m_Druid.wealth + m_Player.wealth;

   //        cout << "Wealth is how many coins you have to spend. As a Druid, you'll only accept wooden coins unlike\nmost Goblins, who want the shiny shiny.\nYour Wealth is: " << m_Player.wealth << "." << endl;
   //    }

   //    if (CLASS == 2)
   //    {
   //        cout << "Your name is " << NAME << " and you are " << AGE << " years old." << endl;
   //        cout << "You are a Goblin, and a warrior at that. others laughed, but when they saw you swing your sword at their knees? Oh boy.\nGoblins are usually hostile, but there are a few in the towns and cities.\nPeople may be wary of you but you're used to that." << endl;

   //        system("pause");


   //        Goblin m_Goblin;
   //        Warrior m_Warrior;
   //        Player m_Player;
   //        m_Player.Max_HP = m_Goblin.health + m_Warrior.health;
   //        m_Player.Current_HP = m_Goblin.health + m_Warrior.health;



   //        cout << "This is your Maximum HP: " << m_Player.Max_HP << endl;

   //        system("pause");

   //        cout << "This is your Current HP: " << m_Player.Current_HP << endl;

   //        system("pause");

   //        m_Player.charm = m_Goblin.charm;

   //        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl;

   //        system("pause");

   //        m_Player.mana = m_Warrior.mana;

   //        cout << "Mana is used to cast spells, which are useless to you.\nYour Mana is: " << m_Player.mana << "." << endl;

   //        system("pause");

   //        m_Player.power = m_Warrior.power;

   //        cout << "Power is how hard you can hit enemies with your sword, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;

   //        system("pause");

   //        m_Player.wealth = m_Warrior.wealth + m_Player.wealth;

   //        cout << "Wealth is how many coins you have to spend. As a Warrior, you've earned more than common folk. Shiny shiny!\nYour Wealth is: " << m_Player.wealth << "." << endl;
   //    }

   //    if (CLASS == 3)
   //    {
   //        cout << "Your name is " << NAME << " and you are " << AGE << " years old." << endl;
   //        cout << "You are a Goblin, and a powerful Wizard. Sure they laughed. Until you made a big ball of fire engulf their lungs. \nGoblins are usually hostile, but there are a few in the towns and cities.\nPeople may be wary of you but you're used to that." << endl;

   //        system("pause");


   //        Goblin m_Goblin;
   //        Wizard m_Wizard;
   //        Player m_Player;
   //        m_Player.Max_HP = m_Goblin.health + m_Wizard.health;
   //        m_Player.Current_HP = m_Goblin.health + m_Wizard.health;



   //        cout << "This is your Maximum HP: " << m_Player.Max_HP << endl;

   //        system("pause");

   //        cout << "This is your Current HP: " << m_Player.Current_HP << endl;

   //        system("pause");

   //        m_Player.charm = m_Goblin.charm;

   //        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl;

   //        system("pause");

   //        m_Player.mana = m_Wizard.mana;

   //        cout << "Mana is used to cast spells, which is all you care about. Well... That and shiny shiny things.\nYour Mana is: " << m_Player.mana << "." << endl;

   //        system("pause");

   //        m_Player.power = m_Wizard.power;

   //        cout << "Power is how hard you can hit enemies with your sword, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;

   //        system("pause");

   //        m_Player.wealth = m_Wizard.wealth + m_Player.wealth;

   //        cout << "Wealth is how many coins you have to spend. As a Wizard, you've invested some of your wealth into your studies.\nYour Wealth is: " << m_Player.wealth << "." << endl;
   //    }



   //}

   //if (RACE == 4)
   //{
   //    if (CLASS == 1) // Merfolk Druid
   //    {
   //        cout << "Your name is " << NAME << " and you are " << AGE << " years old." << endl;
   //        cout << "You are a Merfolk, and a Druid. Being a Druid, your priority is to make sure that all life is safe. \nAs a Merfolk, which is an aquatic race, you prefer the water, but are comfortable on land." << endl;

   //        system("pause");


   //        Merfolk m_Merfolk;
   //        Druid m_Druid;
   //        Player m_Player;
   //        m_Player.Max_HP = m_Merfolk.health + m_Druid.health;
   //        m_Player.Current_HP = m_Merfolk.health + m_Druid.health;



   //        cout << "This is your Maximum HP: " << m_Player.Max_HP << endl;

   //        system("pause");

   //        cout << "This is your Current HP: " << m_Player.Current_HP << endl;

   //        system("pause");

   //        m_Player.charm = m_Merfolk.charm;

   //        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl;

   //        system("pause");

   //        m_Player.mana = m_Druid.mana;

   //        cout << "Mana is used to cast spells, which are stronger than your talons. Either way, you'll fight.\nYour Mana is: " << m_Player.mana << "." << endl;

   //        system("pause");

   //        m_Player.power = m_Druid.power;

   //        cout << "Power is how hard you can hit enemies with your talons, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;

   //        system("pause");

   //        m_Player.wealth = m_Druid.wealth + m_Player.wealth;

   //        cout << "Wealth is how many coins you have to spend. As a Druid, you'll only accept wooden coins, or fish. Fish are good.\nYour Wealth is: " << m_Player.wealth << "." << endl;
   //    }

   //    if (CLASS == 2) // Merfolk Warrior
   //    {
   //        cout << "Your name is " << NAME << " and you are " << AGE << " years old." << endl;
   //        cout << "You are a Merfolk Warrior. Protector of the seas, your trident will serve you well in combat. \nAs a Merfolk, which is an aquatic race, you prefer the water, but are comfortable on land." << endl;

   //        system("pause");


   //        Merfolk m_Merfolk;
   //        Warrior m_Warrior;
   //        Player m_Player;
   //        m_Player.Max_HP = m_Merfolk.health + m_Warrior.health;
   //        m_Player.Current_HP = m_Merfolk.health + m_Warrior.health;



   //        cout << "This is your Maximum HP: " << m_Player.Max_HP << endl;

   //        system("pause");

   //        cout << "This is your Current HP: " << m_Player.Current_HP << endl;

   //        system("pause");

   //        m_Player.charm = m_Merfolk.charm;

   //        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl;

   //        system("pause");

   //        m_Player.mana = m_Warrior.mana;

   //        cout << "Mana is used to cast spells, which are useless to you.\nYour Mana is: " << m_Player.mana << "." << endl;

   //        system("pause");

   //        m_Player.power = m_Warrior.power;

   //        cout << "Power is how hard you can hit enemies with your trident, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;

   //        system("pause");

   //        m_Player.wealth = m_Warrior.wealth + m_Player.wealth;

   //        cout << "Wealth is how many coins you have to spend. As a Warrior, you've earned more than common folk. \nYour Wealth is: " << m_Player.wealth << "." << endl;
   //    }

   //    if (CLASS == 3) // Merfolk Wizard
   //    {
   //        cout << "Your name is " << NAME << " and you are " << AGE << " years old." << endl;
   //        cout << "You are a Merfolk, and a powerful Wizard. Many fear your spells, and what's more is that you're not scared of throwing fire. \nAs a Merfolk, which is an aquatic race, you prefer the water, but are comfortable on land." << endl;

   //        system("pause");


   //        Merfolk m_Merfolk;
   //        Wizard m_Wizard;
   //        Player m_Player;
   //        m_Player.Max_HP = m_Merfolk.health + m_Wizard.health;
   //        m_Player.Current_HP = m_Merfolk.health + m_Wizard.health;



   //        cout << "This is your Maximum HP: " << m_Player.Max_HP << endl;

   //        system("pause");

   //        cout << "This is your Current HP: " << m_Player.Current_HP << endl;

   //        system("pause");

   //        m_Player.charm = m_Merfolk.charm;

   //        cout << "Charm is your ability to pursuade, to talk your way out of trouble, or lower the price of goods. \nYour Charm is: " << m_Player.charm << "." << endl;

   //        system("pause");

   //        m_Player.mana = m_Wizard.mana;

   //        cout << "Mana is used to cast spells, which is all you care about.\nYour Mana is: " << m_Player.mana << "." << endl;

   //        system("pause");

   //        m_Player.power = m_Wizard.power;

   //        cout << "Power is how hard you can hit enemies with your trident, or move a big load. \nYour Power is: " << m_Player.power << "." << endl;

   //        system("pause");

   //        m_Player.wealth = m_Wizard.wealth + m_Player.wealth;

   //        cout << "Wealth is how many coins you have to spend. As a Wizard, you've invested some of your wealth into your studies.\nYour Wealth is: " << m_Player.wealth << "." << endl;
   //    }
   //}
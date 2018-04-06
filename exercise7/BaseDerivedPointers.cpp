#include "FootballPlayer.h"
#include "ProfessionalFootballPlayer.h"
#include <iostream>

using namespace std;

void showPlayer(const FootballPlayer *player) //makes use of the example below - both base and derived class objects are fine for parameters
{
	cout << "\nPrint info for player: \nAge: " << player->getAge() << endl;
	player->printName();
	cout << "\n\n";
}

//shows how u can reference a derived class object from base class pointer, but not the other way round
int main()
{
	FootballPlayer kolyo("Bai Kolyo", 33);
	ProfessionalFootballPlayer ronaldo("Cristiano Ronaldo", 33, 999.82);

	FootballPlayer *p_ronaldo = &ronaldo;
	p_ronaldo->printName();

	showPlayer(&kolyo);
	showPlayer(&ronaldo);

	//ProfessionalFootballPlayer *p_kolyo = &kolyo; //NOT PERMITTED - why?	
}

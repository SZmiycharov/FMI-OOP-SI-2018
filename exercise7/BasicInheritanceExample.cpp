#include "FootballPlayer.h"
#include "ProfessionalFootballPlayer.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "**********BEGIN MAIN**********\n\n";
	FootballPlayer kolyo("Bai Kolyo", 33);

	kolyo.printName();
	cout << endl;

	ProfessionalFootballPlayer ronaldo("Cristiano Ronaldo", 33, 999.82);
	ronaldo.printName(); //call method of base class
	cout << endl;

	cout << "ProfessionalFootballPlayer ronaldo salary: " << ronaldo.getSalary() << endl;

	cout << "**********END MAIN**********\n\n";
}

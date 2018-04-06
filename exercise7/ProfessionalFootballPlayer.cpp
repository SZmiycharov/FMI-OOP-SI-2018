#include "ProfessionalFootballPlayer.h"
#include <iostream>

ProfessionalFootballPlayer::ProfessionalFootballPlayer(const char* name, 
	int age, double salary) : FootballPlayer(name, age) //call to the base class constructor
{
	std::cout << "ProfessionalFootballPlayer class constructor" << std::endl;

	m_salary = salary;
}

ProfessionalFootballPlayer::~ProfessionalFootballPlayer()
{
	std::cout << "Destroying ProfessionalFootballPlayer ";
	this->printName();
	std::cout << "..." << std::endl;
}

double ProfessionalFootballPlayer::getSalary() const
{
	return m_salary;
}
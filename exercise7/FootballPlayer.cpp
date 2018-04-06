#include "FootballPlayer.h"
#include <string>
#include <iostream>

FootballPlayer::FootballPlayer(const char* name, int age)
{
	std::cout << "FootballPlayer class constructor" << std::endl;
	strcpy_s(m_name, strlen(name) + 1, name);
	m_age = age;
}

FootballPlayer::~FootballPlayer()
{
	std::cout << "Destroying FootballPlayer with name: " << m_name << "..." << std::endl;
}

int FootballPlayer::getAge() const
{
	return m_age;
}

void FootballPlayer::printName() const
{
	std::cout << "Name: " << m_name;
}


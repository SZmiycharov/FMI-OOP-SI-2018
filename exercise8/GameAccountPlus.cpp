#include "GameAccountPlus.h"
#include <string>
#include <iostream>

GameAccountPlus::GameAccountPlus(char* nickname, int accNumber, 
	int points, char* motto) : GameAccount(nickname, accNumber, 
	points + BONUS_POINTS_ON_CONSTRUCTION) //Plus accounts start with bonus points
{
	strcpy_s(m_motto, strlen(motto) + 1, motto);
}

GameAccountPlus::~GameAccountPlus()
{
	std::cout << "Destroy object GameAccountPlus with motto: " << m_motto << std::endl;
}

void GameAccountPlus::viewAccount() const
{
	GameAccount::viewAccount();
	std::cout << "motto: " << m_motto << std::endl;
}

void GameAccountPlus::winPoints(int pointsWon)
{
	GameAccount::winPoints(pointsWon + BONUS_POINTS_FOR_WIN);
}
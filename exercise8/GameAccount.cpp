#include "GameAccount.h"
#include <string>
#include <iostream>

GameAccount::GameAccount(char* nickname, int accNumber, int points)
{
	strcpy_s(m_nickname, strlen(nickname) + 1, nickname);
	m_accNumber = accNumber;
	m_points = points;
}

GameAccount::~GameAccount()
{
	std::cout << "Destroying object " << m_nickname << "..." << std::endl;
}

void GameAccount::viewAccount() const //no virtual keyword here
{
	std::cout << "Nickname: " << m_nickname
		<< "\naccnumber: " << m_accNumber
		<< "\npoints: " << m_points << "\n";
}

void GameAccount::winPoints(int pointsWon)
{
	m_points += pointsWon;
}
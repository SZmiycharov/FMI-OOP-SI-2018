#ifndef GAME_ACCOUNT_PLUS_H
#define GAME_ACCOUNT_PLUS_H

#include "GameAccount.h"

class GameAccountPlus : public GameAccount
{
public:
	GameAccountPlus(char* nickname, int accNumber, int points, char* motto);
	~GameAccountPlus();

	void viewAccount() const;
	void winPoints(int pointsWon);
private:
	enum { MOTTO_SIZE = 100, BONUS_POINTS_ON_CONSTRUCTION = 10, BONUS_POINTS_FOR_WIN = 5 };
	char m_motto[MOTTO_SIZE];
};

#endif
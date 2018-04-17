#ifndef GAME_ACCOUNT_H
#define GAME_ACCOUNT_H

class GameAccount
{
public:
	GameAccount(char* nickname, int accNumber, int points);
	virtual ~GameAccount();

	int getPoints() const { return m_points; };
	virtual void viewAccount() const; //virtual method - expected to be redefined in derived classes
	virtual void winPoints(int pointsWon);
private:
	enum { NICKNAME_SIZE = 100 };
	char m_nickname[NICKNAME_SIZE];
	int m_accNumber;
	int m_points;
};

#endif
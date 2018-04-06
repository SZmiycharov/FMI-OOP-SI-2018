#ifndef FOOTBALL_PLAYER_H
#define FOOTBALL_PLAYER_H

class FootballPlayer
{
public:
	FootballPlayer(const char* name = "", int age = 0); //default and parametric constructor
	~FootballPlayer(); //not really needed, but used to show how destructors call order

	int getAge() const;
	void printName() const;
private:
	enum {MAX_SIZE = 50};
	char m_name[MAX_SIZE];
	int m_age;
};

#endif
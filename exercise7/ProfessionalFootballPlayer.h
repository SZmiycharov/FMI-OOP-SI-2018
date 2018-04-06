#ifndef PROFESSIONAL_FOOTBALL_PLAYER_H
#define PROFESSIONAL_FOOTBALL_PLAYER_H

#include "FootballPlayer.h"

class ProfessionalFootballPlayer : public FootballPlayer // : <inheritance class access> <base class name>
{
public:
	ProfessionalFootballPlayer(const char* name = "", int age = 0, double salary = 0.0);
	~ProfessionalFootballPlayer();

	double getSalary() const;
private:
	double m_salary;
};

#endif
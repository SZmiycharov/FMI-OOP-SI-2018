#include "NoDMA.h"

NoDMA::NoDMA(const char * name, int rating, double salary) : BaseDMA(name, rating)
{
	m_salary = salary;
}

std::ostream & operator<<(std::ostream & os, const NoDMA & ls)
{
	os << (const BaseDMA &)ls; //cast to base, use base operator <<
	os << "Salary: " << ls.m_salary << std::endl;
	return os;
}

void NoDMA::greet()
{
	std::cout << "Greetings from NoDMA!" << std::endl;
}
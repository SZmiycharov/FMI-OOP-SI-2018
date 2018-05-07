#include "NoDMA.h"

NoDMA::NoDMA(const char * name, int rating, double salary) : BaseDMA(name, rating)
{
	m_salary = salary;
}

std::ostream & operator<<(std::ostream & os, const NoDMA & obj)
{
	os << (const BaseDMA &)obj; //cast to base, use base operator <<
	os << "Salary: " << obj.m_salary << std::endl;
	return os;
}

void NoDMA::greet()
{
	std::cout << "Greetings from NoDMA!" << std::endl;
}
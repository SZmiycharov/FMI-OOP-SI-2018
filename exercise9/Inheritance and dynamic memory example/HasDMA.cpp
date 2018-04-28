#include "HasDMA.h"

HasDMA::HasDMA(const char * name, int rating, const char * team) : BaseDMA(name, rating)
{
	m_team = new char[std::strlen(team) + 1];
	strcpy_s(m_team, strlen(team) + 1, team);
}

HasDMA::HasDMA(const HasDMA & obj) : BaseDMA(obj) //invoke base copy constructor to handle obj base data copy
{
	CopyFrom(obj); //handle obj derived data copy
}

HasDMA::~HasDMA()
{
	Destroy(); //free current class allocated memory
}

HasDMA & HasDMA::operator=(const HasDMA & obj)
{
	if (this != &obj)
	{
		BaseDMA::operator=(obj); //assignment operator for base class data

		//assignment operator for derived class data
		Destroy();
		CopyFrom(obj);
	}

	return *this;
}

std::ostream & operator<<(std::ostream & os, const HasDMA & obj)
{
	os << (const BaseDMA &)obj;  //cast to base, use base operator <<
	os << "Style: " << obj.m_team << std::endl;
	return os;
}

void HasDMA::greet()
{
	std::cout << "Greetings from HasDMA!" << std::endl;
}

void HasDMA::Destroy()
{
	delete[] m_team;
}

void HasDMA::CopyFrom(const HasDMA & obj)
{
	m_team = new char[std::strlen(obj.m_team) + 1];
	strcpy_s(m_team, strlen(obj.m_team) + 1, obj.m_team);
}
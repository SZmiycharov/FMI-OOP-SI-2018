#include "BaseDMA.h"
#include <cstring>

BaseDMA::BaseDMA(const char * name, int rating)
{
	m_name = new char[std::strlen(name) + 1];
	strcpy_s(m_name, strlen(name) + 1, name);
	m_rating = rating;
}

BaseDMA::BaseDMA(const BaseDMA & obj)
{
	CopyFrom(obj);
}

BaseDMA::~BaseDMA()
{
	Destroy();
}

BaseDMA & BaseDMA::operator=(const BaseDMA & obj)
{
	if (this != &obj)
	{
		Destroy();
		CopyFrom(obj);
	}

	return *this;
}

std::ostream & operator<<(std::ostream & os, const BaseDMA & obj)
{
	os << "Name: " << obj.m_name << std::endl;
	os << "Rating: " << obj.m_rating << std::endl;
	return os;
}

void BaseDMA::Destroy()
{
	delete[] m_name;
}

void BaseDMA::CopyFrom(const BaseDMA & obj)
{
	m_name = new char[std::strlen(obj.m_name) + 1];
	strcpy_s(m_name, strlen(obj.m_name) + 1, obj.m_name);
	m_rating = obj.m_rating;
}
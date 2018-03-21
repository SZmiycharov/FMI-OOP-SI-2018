#include "CustomString.h"

#include <string.h>

int CustomString::membersCount = 0;

CustomString::CustomString()
{
	length = 0;
	str = new char[length + 1];
	strcpy_s(str, length + 1, "");

	membersCount++;
}

CustomString::CustomString(char * s)
{
	length = std::strlen(s);
	str = new char[length + 1];
	strcpy_s(str, length + 1, s);

	membersCount++;
}

CustomString::~CustomString()
{
	Destroy();

	membersCount--;
}

/* New part of our class */
CustomString::CustomString(const CustomString & s)
{
	CopyFrom(s);

	membersCount++;
}

CustomString & CustomString::operator=(const CustomString & s)
{
	if (this != &s)
	{
		Destroy();
		CopyFrom(s);
	}

	return *this;
}

std::ostream& operator<<(std::ostream& os, const CustomString& obj)
{
	os << obj.str;

	return os;
}

void CustomString::CopyFrom(const CustomString & s)
{
	length = s.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, s.str);
}

void CustomString::Destroy()
{
	delete[] str;
}
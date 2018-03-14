#include "CustomString.h"

#include <string.h>
#include <iostream>

int CustomString::membersCount = 0;

CustomString::CustomString(char * s)
{
	str = new char[std::strlen(s) + 1];
	strcpy_s(str, std::strlen(s) + 1, s);

	membersCount++;
}

CustomString::~CustomString()
{
	delete[] str;

	membersCount--;
}

std::ostream& operator<<(std::ostream& os, const CustomString& obj)
{
	os << obj.str;

	return os;
}
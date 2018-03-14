#ifndef CUSTOM_STRING_H
#define CUSTOM_STRING_H

#include <iostream>

class CustomString
{
public:
	CustomString(char * str);
	//destructor needed to free dynamically allocated memory
	~CustomString();
	friend std::ostream& operator<<(std::ostream& os, const CustomString& obj);
	static int membersCount;

private:
	//dynamic array of chars - a.k.a string
	char * str;
};

#endif
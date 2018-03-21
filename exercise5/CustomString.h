#ifndef CUSTOM_STRING_H
#define CUSTOM_STRING_H

#include <iostream>

class CustomString
{
public:
	CustomString();
	CustomString(char * str);
	~CustomString();
	CustomString(const CustomString & s); //copy constructor
	CustomString & CustomString::operator=(const CustomString & s); //assignment operator

	friend std::ostream& operator<<(std::ostream& os, const CustomString& obj);
	static int membersCount;

private:
	void CopyFrom(const CustomString & s);
	void Destroy();

	char * str;
	int length;
};

#endif
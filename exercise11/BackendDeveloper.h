#pragma once
#include "Developer.h"

class BackendDeveloper :
	virtual public Developer
{
public:
	BackendDeveloper(char* name = "", int salary = 0, int yearsPythonExperience = 0) :
		Developer(name, salary), m_yearsPythonExperience(yearsPythonExperience) {};
	virtual ~BackendDeveloper() {};

	virtual void PrintTodos() const;
	virtual void Show() const; //print info for FrontendDeveloper (including info for basic Developer)

protected:
	virtual void Data() const; //print current class information 

private:
	int m_yearsPythonExperience;
};
#pragma once
#include "BackendDeveloper.h"
#include "FrontendDeveloper.h"

class FullStackDeveloper :
	public BackendDeveloper, public FrontendDeveloper
{
public:
	FullStackDeveloper(char* name = "", int salary = 0, int yearsPythonExperience = 0, int yearsJsExperience = 0) :
		Developer(name), BackendDeveloper(name, salary, yearsPythonExperience), FrontendDeveloper(name, salary, yearsJsExperience) {};
	~FullStackDeveloper() {};

	virtual void PrintTodos() const;
	virtual void Show() const; //print info for FulstackDeveloper (including info for basic, frontend and backend developer)
	
protected:
	virtual void Data() const; //print info only for current class - therefore nothing
};
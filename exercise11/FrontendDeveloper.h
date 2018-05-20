#pragma once
#include "Developer.h"

class FrontendDeveloper :
	virtual public Developer
{
public:
	FrontendDeveloper(char* name = "", int salary = 0, int yearsJsExperience = 0) :
		Developer(name, salary), m_yearsJavascriptExperience(yearsJsExperience) {};
	virtual ~FrontendDeveloper() {};

	virtual void PrintTodos() const;
	virtual void Show() const; //print info for FrontendDeveloper (including info for basic Developer)

protected:
	virtual void Data() const; //print current class information 

private:
	int m_yearsJavascriptExperience;
};
#include "FrontendDeveloper.h"

#include <iostream>

void FrontendDeveloper::PrintTodos() const
{
	std::cout << "FrontendDeveloper todos: " << std::endl <<
		"1) Implement website interfaces, " << std::endl <<
		"2) Design mobile-based features, " << std::endl <<
		"3) Collaborate with back-end developers and web designers to improve usability!" << std::endl;
}

void FrontendDeveloper::Show() const
{
	std::cout << "Show frontend developer info: " << std::endl;
	Developer::Data(); //Print info of basic developer
	Data(); //Print info of FrontendDeveloper
}

void FrontendDeveloper::Data() const
{
	std::cout << "Years JS experience: " << m_yearsJavascriptExperience << std::endl;
}
#include "BackendDeveloper.h"

#include <iostream>

void BackendDeveloper::PrintTodos() const
{
	std::cout << "BackendDeveloper todos: " << std::endl <<
		"1) Optimization of the application for maximum speed and scalability, " << std::endl <<
		"2) Implementation of security and data protection, " << std::endl <<
		"3) Building reusable code and libraries for future use!" << std::endl;
}

void BackendDeveloper::Show() const
{
	std::cout << "Show backend developer info: " << std::endl;
	Developer::Data(); //Print info of basic developer
	Data(); //Print info of BackendDeveloper
}

void BackendDeveloper::Data() const
{
	std::cout << "Years python experience: " << m_yearsPythonExperience << std::endl;
}
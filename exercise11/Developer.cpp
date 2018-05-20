#include "Developer.h"
#include <iostream>

void Developer::Data() const
{
	std::cout << "Name: " << m_name << std::endl 
		<< "Salary: " << m_salary << std::endl;
}
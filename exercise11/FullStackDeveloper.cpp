#include "FullStackDeveloper.h"

#include <iostream>

void FullStackDeveloper::PrintTodos() const
{
	std::cout << "FullstackDeveloper todos: " << std::endl;
	FrontendDeveloper::PrintTodos();
	BackendDeveloper::PrintTodos();
}

void FullStackDeveloper::Show() const
{
	FrontendDeveloper::Data();
	BackendDeveloper::Data();
	Data();
}

void FullStackDeveloper::Data() const
{
	//if FullStackDeveloper had new data, print it
}
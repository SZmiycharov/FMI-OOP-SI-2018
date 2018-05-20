#include <iostream>

#include "FullStackDeveloper.h"

using namespace std;

int main()
{
	BackendDeveloper bDev("Backend Developerov", 3500, 4);
	FrontendDeveloper fDev("Frontend Developerov", 2500, 3);
	FullStackDeveloper fsDev("Fullstack Developerov", 4500, 5, 5);

	Developer *developers[3] = { &bDev, &fDev, &fsDev };

	developers[0]->PrintTodos();
	developers[0]->Show();

	cout << "\n\n*************\n\n";

	developers[1]->PrintTodos();
	developers[1]->Show();

	cout << "\n\n*************\n\n";

	developers[2]->PrintTodos();
	developers[2]->Show();

	system("pause");
}
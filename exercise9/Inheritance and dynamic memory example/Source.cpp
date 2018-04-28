#include <iostream>

using namespace std;

#include "HasDMA.h"
#include "NoDMA.h"

int main()
{	
	HasDMA dm("Test name for dynamic memory", 15, "Best team");
	cout << dm;

	dm.greet();

	cout << "\n";

	NoDMA ndm("Name no dynamic memory", 12, 13.5);
	cout << ndm;
	ndm.greet();

	cout << "\n";

	NoDMA test = ndm;
	cout << test << endl;

	return 0;
}
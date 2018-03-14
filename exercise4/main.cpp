#include "Time.h"
#include "CustomString.h"
using namespace std;

int main()
{
	Time homework(1, 24);

	Time threeDaysHomework = homework * 3;
	threeDaysHomework.Show();

	Time fourDaysHw = 4 * homework; //now working - because of the friend operator*	
	cout << fourDaysHw << endl; //overloaded << operator

	/*simple dynamic array of chars example:
	char * str = new char[10];
	strcpy_s(str, sizeof(str), "Asd");

	cout << str << endl;

	delete[] str;*/

	cout << endl;
	CustomString testStr("This is a test!");

	cout << testStr << endl;

	cout << CustomString::membersCount << endl;

	system("pause");
}

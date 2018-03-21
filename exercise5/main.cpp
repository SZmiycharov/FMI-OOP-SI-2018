#include "CustomString.h"
#include "Time.h"

using namespace std;

int main()
{
	CustomString firstStr;
	CustomString secondStr("This is our second string!");

	cout << "Second string: " << secondStr << endl;

	firstStr = secondStr;

	cout << "First string: " << firstStr << endl;
	cout << "Members count: " << CustomString::membersCount << endl;

	CustomString thirdString = secondStr;

	cout << "Third string: " << thirdString << endl;

	system("pause");
}

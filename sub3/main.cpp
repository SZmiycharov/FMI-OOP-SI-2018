#include "Time.h"
#include <iostream>
using namespace std;

void PrettyPrint(char* str)
{
	cout << "Char print: " << str << endl;
}
void PrettyPrint(int num)
{
	cout << "Int print: " << num << endl;
}
void PrettyPrint(double num)
{
	cout << "Double print: " << num << endl;
}

int main()
{
	PrettyPrint("String test");
	PrettyPrint(5);
	PrettyPrint(3.14);

	Time homework(1, 24);
	Time lunchBreak(0, 30);

	Time totalTimeHw = homework + lunchBreak;
	totalTimeHw.Show();

	Time threeDaysHomework = homework * 3;
	threeDaysHomework.Show();

	system("pause");
}

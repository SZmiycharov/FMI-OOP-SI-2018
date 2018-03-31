#include "StaticStack.h"
#include <iostream>

using namespace std;

//void swapValues(int &n1, int &n2)
//{
//	int helper = n1;
//	n1 = n2;
//	n2 = helper;
//}

template <typename T>
void swapValues(T &n1, T &n2)
{
	T helper = n1;
	n1 = n2;
	n2 = helper;
}

int main()
{
	int x = 3;
	int y = 5;

	swapValues(x, y); // try out with two doubles or two chars
	cout << "x: " << x << "; y: " << y << endl;

	StaticStack<int> intStack; //try out <double> and <char>

	//intStack.Pop(); //uncomment to see result

	for (int i = 0; i < 5; i++)
	{
		intStack.Push(i);
	}

	cout << "intStack size: " << intStack.GetSize() << "\n\n";
	while (!intStack.IsEmpty())
	{
		cout << "intStack top: " << intStack.Top() << endl;
		intStack.Pop();
	}

	system("pause");
}

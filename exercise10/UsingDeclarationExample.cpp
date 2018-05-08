using namespace std;

#include <iostream>

class B{
protected:
	void print(){ cout << "Basic print" << endl; }
	void print(int n) { cout << "Integer print: " << n << endl; }
	void print(char c) { cout << "Char print: " << c << endl; }
};

class D : private B{
public:
	using B::print; //makes all the overloaded print methods available for B's interface
};

int main()
{
	D d;

	d.print();
	d.print(26);
	d.print('a');
}
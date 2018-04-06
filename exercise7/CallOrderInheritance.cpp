using namespace std;

#include <iostream>

class A{
public:
	A(){ cout << "A() constructor" << endl; }
	~A(){ cout << "~A() destructor" << endl; }
};

class B : public A{
public:
	B(){ cout << "B() constructor" << endl; }
	~B(){ cout << "~B() destructor" << endl; }
};

class C : public B{
public:
	C(){ cout << "C() constructor" << endl; }
	~C(){ cout << "~C() destructor" << endl; }
};

//Shows the call order of the base and derived class constructors and destructors
int main()
{
	cout << "**********BEGIN MAIN**********\n\n";

	C c;

	cout << "**********END MAIN**********\n\n";
}

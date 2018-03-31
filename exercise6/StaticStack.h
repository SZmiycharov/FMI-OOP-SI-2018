#ifndef STATIC_STACK_H
#define STATIC_STACK_H

#include <assert.h>

template <typename T>
//represents the data structure Stack - first in last out
class StaticStack {
public:
	StaticStack();

public:
	void Push(const T & Element);
	void Pop();
	T Top() const;

	int GetSize() const;
	bool IsEmpty() const;

private:
	enum { SIZE = 10 }; //one way of making a constant for use in our class
	T StackData[SIZE]; //the container holding our data - static array
	int Used;
};

template<typename T>
StaticStack<T>::StaticStack()
{
	Used = 0;
}

template<typename T>
void StaticStack<T>::Push(const T & Element)
{
	if (Used >= SIZE)
	{
		std::cout << "Stack already full!" << std::endl;
		return;
	}

	StackData[Used++] = Element; //insert at current index AND increment used elements
}

//if Pop or Top is called on an empty stack, error occurs (we are strict with our class)
template<typename T>
void StaticStack<T>::Pop()
{
	assert(Used > 0);

	--Used;
}

template<typename T>
T StaticStack<T>::Top() const
{
	assert(Used > 0);

	return StackData[Used - 1];
}

template<typename T>
int StaticStack<T>::GetSize() const
{
	return Used;
}

template<typename T>
bool StaticStack<T>::IsEmpty() const
{
	//if Used == 0, then it is empty
	return Used == 0;
}

#endif
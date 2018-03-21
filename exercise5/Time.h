#ifndef TIME_H
#define TIME_H

#include <iostream>
#include "CustomString.h"

class Time{
public:
	Time();
	Time(int h, int m, CustomString t);
	void Show() const;
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time & t) const;
	Time operator-(const Time & t) const;
	Time operator*(int mult) const;

	friend Time operator*(double m, const Time & t) { return t * m; }
	friend std::ostream & operator<<(std::ostream & os, const Time & t);
private:
	int hours;
	int minutes;
	CustomString description;
};


#endif // !TIME_H

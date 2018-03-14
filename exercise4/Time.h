#ifndef TIME_H
#define TIME_H

#include <iostream>

class Time{
public:
	Time();
	Time(int h, int m);
	void Show() const;
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time & t) const;
	Time operator-(const Time & t) const;
	Time operator*(int mult) const;

	/*------------- New part of our class -------------*/
	//friend Time operator*(int mult, const Time &t);
	friend Time operator*(double m, const Time & t) { return t * m; }
	friend std::ostream & operator<<(std::ostream & os, const Time & t);

private:
	int hours;
	int minutes;
};


#endif // !TIME_H

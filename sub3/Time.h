#ifndef TIME_H
#define TIME_H

class Time{
public:
	Time();
	Time(int h, int m);
	void Show() const;
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time & t) const;
	Time operator-(const Time & t) const;
	Time operator*(int mult) const;

private:
	int hours;
	int minutes;
};

#endif // !TIME_H

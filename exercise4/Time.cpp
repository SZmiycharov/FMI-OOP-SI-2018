#include "Time.h"
#include <assert.h>

Time::Time()
{
	hours = 0;
	minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::Show() const
{
	std::cout << hours << " hours and " << minutes << " minutes" << std::endl;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::operator+(const Time & t) const
{
	Time sum;

	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;

	return sum;
}

Time Time::operator-(const Time & t) const
{
	Time diffference;
	int totalMins1, totalMins2;

	totalMins1 = t.minutes + 60 * t.hours;
	totalMins2 = minutes + 60 * hours;

	//our "-" operator is strict - if user produces as a result negative time, an error occurs
	assert(totalMins2 >= totalMins1);

	diffference.minutes = (totalMins2 - totalMins1) % 60;
	diffference.hours = (totalMins2 - totalMins1) / 60;

	return diffference;
}

Time Time::operator*(int mult) const
{
	Time result;

	int totalMinutes = hours * mult * 60 + minutes * mult;
	result.hours = totalMinutes / 60;
	result.minutes = totalMinutes % 60;

	return result;
}

/*------------- New part of our class -------------*/

////difference with top function: additional parameter for the object; and it is not a member (no Time::)
//Time operator*(int mult, const Time & t) // word "friend" does not appear in the definition
//{
//	Time result;
//
//	int totalMinutes = t.hours * mult * 60 + t.minutes * mult; //access to private "t" members  - it can, because it is a friend
//	result.hours = totalMinutes / 60;
//	result.minutes = totalMinutes % 60;
//
//	return result;
//}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
	os << t.hours << "hours and " << t.minutes << " minutes";
	return os;
}
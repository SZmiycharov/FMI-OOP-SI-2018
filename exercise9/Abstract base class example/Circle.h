#ifndef CIRCLE_H
#define CIRCLE_H

#include "BaseEllipse.h"

class Circle : public BaseEllipse
{
public:
	Circle(double x0 = 0, double y0 = 0, double r = 0) : BaseEllipse(x0, y0), m_r(r) {};
	virtual ~Circle() {}
	virtual double Area() const { return 3.14 * m_r * 3; }; //we MUST implement Area function since it is pure virtual

private:
	double m_r;
};

#endif
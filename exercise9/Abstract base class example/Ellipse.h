#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "BaseEllipse.h"

class Ellipse : public BaseEllipse
{
public:
	Ellipse(double x0, double y0, int rH, int rV) : BaseEllipse(x0, y0), rHorizontal(rH), rVertical(rV) {};
	~Ellipse() {};

	virtual double Area() const { return  3.14 * rHorizontal * rVertical; }; //we MUST implement Area function since it is pure virtual

private:
	double rHorizontal;
	double rVertical;
};

#endif
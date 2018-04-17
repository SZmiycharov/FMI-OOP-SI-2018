#ifndef BASE_ELLIPSE_H
#define BASE_ELLIPSE_H

struct Point{
	int x;
	int y;
};

class BaseEllipse // abstract base class
{
public:
	BaseEllipse(double x0 = 0, double y0 = 0);
	virtual ~BaseEllipse() {}
	virtual double Area() const = 0; // a pure virtual function, making the class abstract
private:
	Point center;
};

#endif	
#ifndef NO_DMA_H
#define NO_DMA_H

#include "BaseDMA.h"

class NoDMA : public BaseDMA
{
public:
	NoDMA(const char * name = "NONAME", int rating = 0, double salary = 0);

	friend std::ostream & operator<<(std::ostream & os, const NoDMA & rs);
	void greet();

private:
	double m_salary;
};

#endif
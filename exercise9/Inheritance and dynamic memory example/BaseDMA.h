#ifndef BASE_DMA_H
#define BASE_DMA_H

#include <iostream>

class BaseDMA
{
public:
	BaseDMA(const char * name = "NONAME", int rating = 0);
	BaseDMA(const BaseDMA & obj);
	virtual ~BaseDMA();
	BaseDMA & operator=(const BaseDMA & obj);

	friend std::ostream & operator<<(std::ostream & os, const BaseDMA & obj);
	virtual void greet() = 0;

private:
	void Destroy();
	void CopyFrom(const BaseDMA & obj);

	char * m_name;
	int m_rating;
};

#endif
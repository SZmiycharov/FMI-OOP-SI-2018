#ifndef HAS_DMA_H
#define HAS_DMA_H

#include "BaseDMA.h"

class HasDMA : public BaseDMA
{
public:
	HasDMA(const char * name = "NONAME", int rating = 0, const char * team = "NOTEAM");
	HasDMA(const HasDMA & obj);
	~HasDMA();
	HasDMA & operator=(const HasDMA & obj);

	friend std::ostream & operator<<(std::ostream & os, const HasDMA & obj);
	void greet();

private:
	void Destroy();
	void CopyFrom(const HasDMA & obj);

	char * m_team;
};

#endif
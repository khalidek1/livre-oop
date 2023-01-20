#ifndef SERIELIVRE_EDITION_H
#define SERIELIVRE_EDITION_H
#include "serielivre.h"

class serielivre_edition : public serielivre 
{
	public:
		serielivre_edition();
		serielivre_edition(int n,string);
		serielivre_edition( const serielivre_edition&  );
		~serielivre_edition();
		friend istream& operator>>(istream& , serielivre_edition&);
		friend ostream& operator<<(ostream& , const serielivre_edition&);
	protected:
		string edition;
};

#endif

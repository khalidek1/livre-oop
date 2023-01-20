#ifndef SERIELIVRE_H
#define SERIELIVRE_H
#include "livre.h"

class serielivre
{
	
	public:
		serielivre();
		serielivre(int);
		~serielivre();
		friend bool composante(const serielivre& ,const serielivre&  );
		friend bool indexe( const serielivre& );
		livre& operator[](int);
		friend istream& operator>>(istream& , serielivre&);
		friend ostream& operator<<(ostream& , const serielivre&);
	protected:
		int nbp;
		livre* t;
};


#endif

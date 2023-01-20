#ifndef LIVRE_H
#define LIVRE_H
#include <iostream>
#include <string>
using namespace std;

class livre
{
	string titre;
	bool index;
	float prix;
	public:
		livre();
		livre(string,bool,float);
		livre(const livre& );
	    string getTitre();
	    bool getindex();
	    float getprix();
	    ~livre();
	    bool operator==(const livre&);
	    bool operator!=(const livre&);
	    livre& operator=(const livre&);
	    friend istream& operator>>(istream& ,  livre& );
	    friend ostream& operator<<(ostream& ,  const livre& );
	    
	protected:
};



#endif

#include "serielivre_edition.h"
#include "serielivre.h"
#include "livre.h"
#include <iostream>
using namespace std;

serielivre_edition::serielivre_edition(){
cout<<"constructeur par defaut de la class serie livre edition : "<<endl;	
}

serielivre_edition::serielivre_edition(int n,string ed):serielivre(n),edition(ed)
{
	cout<<"constructeur usuel de la class serie livre edition : "<<endl;
}

serielivre_edition::~serielivre_edition()
{
	cout<<"destructor de la class serie livre edition : "<<endl;
}

serielivre_edition::serielivre_edition( const serielivre_edition& sl):serielivre(sl),edition(sl.edition)
{
	
}

istream& operator>>(istream& is , serielivre_edition& sl){
	
	cout<<"saisir la maison d edition de serie de livre est :"<<endl;
	is>>sl.edition;
	cout<<"saisir le nbre de livre"<<endl;
	is>>sl.nbp;
	sl.t=new livre[sl.nbp];
	for(int i=0;i<sl.nbp;i++){
		cin>>sl.t[i];
	}
	
	return is;
}


ostream& operator<<(ostream& os , const serielivre_edition& sl){
	os<<"la maison d edition de serie de livre est :"<<sl.edition<<endl;
	os<<"nbre de livre est : "<<sl.nbp<<endl;
	for(int i=0;i<sl.nbp;i++){
        cout<<sl.t[i]<<endl;
	}
	return os;
}





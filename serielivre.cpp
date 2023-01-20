#include "serielivre.h"
#include "livre.h"
#include <iostream>
using namespace std;

serielivre::serielivre(){
	cout<<"constructeur par defaut de la class serie livre: "<<endl;
	nbp=0;
	t=NULL;
}

serielivre::~serielivre(){
	cout<<"destructeur de la class serie livre"<<endl;
}
 serielivre::serielivre(int n){
    cout<<"constructeur usuel de la class lserie ivre: "<<endl;
	nbp=n;
	t=new livre[nbp];
	for(int i=0;i<nbp;i++)
	cin>>t[i];
}

bool composante(const serielivre& sl1 , const serielivre& sl2 ){
	if(sl2.nbp==sl1.nbp){
	for(int i=0;i<sl1.nbp;i++){
		if(sl2.t[i]==sl1.t[i]) return true;
	}
	}
	return false;
}


bool indexe(const serielivre& sl ){
	
	for(int i=0;i<sl.nbp;i++){
		if(sl.t[i].getindex()==true) return true;
	}
	return false;
}

livre& serielivre::operator[](int n){
 
   if(n>=0 && n<nbp){
	return t[n];
   }
	
}

istream& operator>>(istream& is , serielivre& sl){
	
	cout<<"saisir le nbre de livre"<<endl;
	is>>sl.nbp;
	sl.t=new livre[sl.nbp];
	for(int i=0;i<sl.nbp;i++){
		cin>>sl.t[i];
	}
	
	return is;
}

ostream& operator<<(ostream& os , const serielivre& sl){
	os<<"nbre de livre est : "<<sl.nbp<<endl;
	for(int i=0;i<sl.nbp;i++){
        cout<<sl.t[i]<<endl;
	}
	return os;
}














#include "livre.h"
#include <iostream>
#include <string>
using namespace std;

livre::livre(){
	cout<<"constructeur par defaut de la class livre:"<<endl;
	titre="";
	index=false;
	prix=0;
}

livre::livre(string titre,bool index,float prix){
	cout<<"constructeur usuel de la class livre: "<<endl;
	this->titre=titre;
	this->index=index;
	this->prix=prix;
}

livre::livre(const livre& l){
	cout<<"constructeur par copie de la class livre :"<<endl;
	titre=l.titre;
	index=l.index;
	prix=l.prix;
}

livre::~livre(){
	cout<<"destructeur de la class livre"<<endl;
}

string livre::getTitre(){
	return titre;
}

bool livre::getindex(){
	return index;
}

float livre::getprix(){
	return prix;
}

bool livre::operator==(const livre& l){
	return (titre==l.titre && index==l.index && prix==l.prix);
}

bool livre::operator!=(const livre& l){
	return  !( *this == l);
}

livre& livre::operator=(const livre& l){
	if(this!=&l){
	titre=l.titre;
	index=l.index;
	prix=l.prix;
	}
	return *this;
}

istream& operator>>(istream& is ,  livre& l ){
	cout<<"saisir index de livre : "<<endl;
	is>>l.index;
	cout<<"saisir prix de livre : "<<endl;
	is>>l.prix;
	cout<<"saisir titre de livre : "<<endl;
	is>>l.titre;
    
	return is;	
}

ostream& operator<<(ostream& os, const livre& l )
{	
	os<<"index de livre : "<<l.index<<endl;
	os<<"prix de livre : "<<l.prix<<"$"<<endl;
	os<<"titre de livre : "<<l.titre<<endl;
	return os;	
}

















#include "ksztalt.hpp"

ksztalt::ksztalt(string kolor):kolor(kolor){};

string ksztalt::getKolor() const{
	return kolor;
};

void ksztalt::setKolor(string kolor){
	this->kolor=kolor;
};

void ksztalt::partPrint() const{
	cout<<"kolor: "<<this->getKolor()<<endl;
	cout<<"pole: "<<this->getPole()<<endl;
};





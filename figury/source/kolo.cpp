#include "kolo.hpp"

kolo::kolo(float r, string kolor): r(r), ksztalt(kolor){};

float kolo::getR() const{
		return r;
};

void kolo::setR(float r){
		this[0].r=r;
};

void kolo::print() const{
		cout<<"kolo"<<endl;
		cout<<"r: "<<r<<endl;
		this->partPrint();
		cout<<endl;
};

float kolo::getPole() const{
		return r*r*3.14;
};

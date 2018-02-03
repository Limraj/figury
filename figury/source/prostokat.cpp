#include "prostokat.hpp"

prostokat::prostokat(float a, float b, string kolor): a(a), b(b), ksztalt(kolor){};

int prostokat::getA() const{
	return a;
};

int prostokat::getB() const{
	return b;
};

void prostokat::setB(float b){
	this->b=b;
};

void prostokat::setA(float a){
	this->a=a;
};

void prostokat::print() const{
	cout<<"prostokat"<<endl;
	cout<<"a: "<<a<<" b: "<<b<<endl;
	this->partPrint();
	cout<<endl;
};
		
float prostokat::getPole() const{
	return a*b;
};




#include "rectangle.hpp"

rectangle::rectangle(float a, float b, string color): a(a), b(b), figure(color) {};

int rectangle::getA() const {
	return a;
};

int rectangle::getB() const {
	return b;
};

void rectangle::setB(float b) {
	this->b = b;
};

void rectangle::setA(float a) {
	this->a = a;
};

void rectangle::print() const {
	cout<<"prostokat"<<endl;
	cout<<"a: "<< a <<" b: "<< b <<endl;
	this-> partPrint();
	cout<<endl;
};
		
float rectangle::calculateField() const {
	return a * b;
};




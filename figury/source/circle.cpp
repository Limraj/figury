#include "circle.hpp"

circle::circle(float r, string color): r(r), figure(color) {};

float circle::getR() const {
		return r;
};

void circle::setR(float r) {
		this[0].r=r;
};

void circle::print() const {
		cout<<"kolo"<<endl;
		cout<<"r: "<<r<<endl;
		this->partPrint();
		cout<<endl;
};

float circle::calculateField() const {
		return r*r*3.14;
};

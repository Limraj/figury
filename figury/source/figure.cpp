#include "figure.hpp"

figure::figure(string color):color(color) {};

string figure::getColor() const {
	return color;
};

void figure::setColor(string color) {
	this->color = color;
};

void figure::partPrint() const {
	cout<<"kolor: "<< this-> getColor() <<endl;
	cout<<"pole: "<< this-> calculateField() <<endl;
};





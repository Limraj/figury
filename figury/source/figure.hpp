#ifndef figure_hpp
#define figure_hpp

#include <string>
#include <iostream>
using namespace std;

class figure {
	private:
		string color;

	public:
		figure(string);
		
		string getColor() const;
		void setColor(string);
		
		
		virtual void print() const =0;
		virtual float calculateField() const =0;
		
	protected:
		void partPrint() const;
};

#endif

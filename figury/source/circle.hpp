#ifndef circle_hpp
#define circle_hpp

#include "figure.hpp"

class circle:public figure {
	private:
		float r;
		
	public:
		circle(float =0, string ="kremowy");
		
		float getR() const;
		void setR(float);
		
		void print() const;
		float calculateField() const;
		
};

#endif

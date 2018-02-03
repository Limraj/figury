#ifndef rectangle_hpp
#define rectangle_hpp

#include "figure.hpp"

class rectangle:public figure {
	private:
		float a;
		float b;

	public:
		rectangle(float =0, float =0, string ="pomaranczowy");
		
		int getA() const;
		int getB() const;
		
		void setA(float);
		void setB(float);
		
		void print() const;
		float calculateField() const;
};

#endif

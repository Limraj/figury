#ifndef prostokat_hpp
#define prostokat_hpp

#include "ksztalt.hpp"

class prostokat:public ksztalt{
	private:
		float a;
		float b;

	public:
		prostokat(float =0, float =0, string ="pomaranczowy");
		
		int getA() const;
		int getB() const;
		
		void setA(float);
		void setB(float);
		
		void print() const;
		float getPole() const;
};

#endif

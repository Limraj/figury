#ifndef kolo_hpp
#define kolo_hpp

#include "ksztalt.hpp"

class kolo:public ksztalt{
	private:
		float r;
		
	public:
		kolo(float =0,string ="kremowy");
		
	float getR() const;
	void setR(float);
	
	void print() const;
	float getPole() const;
		
};

#endif

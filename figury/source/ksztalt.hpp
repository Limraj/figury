#ifndef ksztalt_hpp
#define ksztalt_hpp

#include <string>
#include <iostream>
using namespace std;

class ksztalt{
	private:
		string kolor;

	public:
		ksztalt(string);
		
		string getKolor() const;
		void setKolor(string);
		
		
		virtual void print() const =0;
		virtual float getPole() const =0;
		
	protected:
		void partPrint() const;
};

#endif

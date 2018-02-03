#include <conio.h> 
#include "source\circle.hpp"
#include "source\rectangle.hpp"
#include "source\figure.hpp"

circle *circle1 = new circle(4,"biale");
circle *circleDefault = new circle();
rectangle rectangle1(6,3,"Niebieski");
float value = 33;

void setColorAndPrintUniversal(figure &figure, string color) {
	figure.setColor(color);
	figure.print();
};

void printUniversal(figure &figure) {
	figure.print();
};

template<class T> T copyUniversal(T object) {
	return object;
};

float calculateFieldUniversal(figure &figure) {
	figure.calculateField();
};

void printTwoFigure(string namefigure1, figure &figure1, string namefigure2, figure &figure2) {
	
	cout<<namefigure1+": "<<endl;
	figure1.print();
	
	cout<<namefigure2+": "<<endl;
	figure2.print();

}

void usedVariablesPrint() {

	cout<<"Wykorzysytywane zmienne: "<<endl;
	cout<<endl;
	
	cout<<"Obiekt typu kolo:"<<endl;
	circle1->print();
	cout<<endl;
	
	cout<<"Drugi obiekt typu kolo, o wartosci domyslnej:"<<endl;
	circleDefault[0].print();
	cout<<endl;
	
	cout<<"Obiekt typu prostokat:"<<endl;
	rectangle1.print();
	cout<<endl;
	
	cout<<"Zmienna typu int:"<<value<<endl;
	cout<<endl;
}

void setRMethodByPointerAndPrint() {

	cout<<"Odwolywanie sie do metody przez wskaznik, dzialanie metody set:"<<endl;
	cout<<endl;
	
	cout<<"Przed zmiana: "<<endl;
	printUniversal(*circle1);
	circle1->setR(value);
	
	cout<<"Po wpisaniu do r wartosci: "<<value<<endl;
	printUniversal(*circle1);
}

void polymorphismExampleOfTable() {
	
	cout<<"Polimorfizm na przykladzie tablicy trojwymiarowej, w jednej tablicy mamy kola i prostokaty, oraz prezentacja metody printUniversal:"<<endl;
	cout<<endl;
	figure **** figures = new figure***[2];
	
	for(int i=0;i<3;i++) {
		
		figures[i] = new figure**[2];
		
		for(int j=0;j<2;j++) {
			
			figures[i][j] = new figure*[2];
			
			for(int k=0;k<2;k++) {
				
				if(k%2==0) {
					figures[i][j][k] = new circle(5, "bordo");
				} else {
					figures[i][j][k] = new rectangle(3, 5, "zielony");
				}
			}	
		}	
	}
	
	cout<<"Wyswietlamy tablice trojwymiarowa z obiektami kolo i prostokat, korzystajac z metody printUniversal:"<<endl;
	cout<<endl;
	for(int i=0;i<2;i++) {
		for(int j=0;j<2;j++) {
			for(int k=0;k<2;k++) { 
			
				cout<<"ksz["<<i<<"]["<<j<<"]["<<k<<"]:";
				printUniversal(*figures[i][j][k]);
			}
		}
	}
	
	cout<<"end"<<endl;
	cout<<endl;
}

void polymorphismExampleOfPrintTwoFigure() {

	cout<<"Demonstracja polimorfizmu na przykladzie metody printTwoFigure rozne typy:"<<endl;
	cout<<endl;
	printTwoFigure("", *circle1, "", rectangle1);
	
	cout<<"Te same typy:"<<endl;
	cout<<endl;
	printTwoFigure("", *(new rectangle()), "", rectangle1);
}

void polymorphismExampleOfCalculateFieldUniversal() {

	cout<<"Prezentacja polimorfizmu na przyk³adzie metod: setColorAndPrintUniversal, oraz calculateFieldUniversal"<<endl;
	cout<<endl;
	
	cout<<"Przed uzyciem metody uniwersalnySetKolorAndPrint: "<<endl;
	cout<<endl;
	printUniversal(*circle1);
	
	cout<<"Po uzyciu metody uniwersalnySetKolorAndPrint: "<<endl;
	cout<<endl;
	setColorAndPrintUniversal(*circle1, "Brazowe");
	cout<<endl;
	
	cout<<"Wartosc zwracana przez metode uniwersalnyGetPole, dla obiektu z poprzedniego przykladu: "<<endl;
	cout<<calculateFieldUniversal(*circle1)<<endl;
	cout<<endl;
	
	cout<<"Obiekt typu prostokat, dla ktorego bedzie wywolywana metoda calculateFieldUniversal: "<<endl;
	printUniversal(rectangle1);
	cout<<endl;
	
	cout<<"Wyswietlenie wartosci zwracanej przez metode calculateFieldUniversal: "<<endl;
	cout<<calculateFieldUniversal(rectangle1)<<endl;
	cout<<endl;
}

void testGenericMethodCopyUniversal() {

	cout<<"Prezentacja generycznej metody: copyUniversal, kopia dowolnego obiektu:"<<endl;
	cout<<endl;
	rectangle rectangle1Copy = copyUniversal(rectangle1);
	printTwoFigure("oryginal", rectangle1, "kopia", rectangle1Copy);
	
	cout<<"Po zmianie oryginalu: "<<endl;
	cout<<endl;
	rectangle1.setA(value);
	printTwoFigure("oryginal", rectangle1, "kopia", rectangle1Copy);
	
	cout<<"Po zmianie kopi: "<<endl;
	cout<<endl;
	rectangle1Copy.setB(value*2);
	printTwoFigure("oryginal", rectangle1, "kopia", rectangle1Copy);
	cout<<endl;
	
}

int main(int argc, char *argv[]) {

	cout<<"1. ";
	usedVariablesPrint();
	cout<<"2. ";
	setRMethodByPointerAndPrint();
	cout<<"3. ";
	polymorphismExampleOfTable();
	cout<<"4. ";
	polymorphismExampleOfPrintTwoFigure();
	cout<<"5. ";
	polymorphismExampleOfCalculateFieldUniversal();
	cout<<"6. ";
	testGenericMethodCopyUniversal();

	_getch();
	return 0;
}










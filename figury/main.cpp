#include <conio.h> 
#include "source\circle.hpp"
#include "source\rectangle.hpp"
#include "source\figure.hpp"

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

int main(int argc, char *argv[]) {
	
	circle *kol=new circle(4,"biale");
	circle *kol2=new circle();
	rectangle pro(6,3,"Niebieski");
	float test=123;
	
	cout<<"1. Wykorzysytywane zmienne: "<<endl;
	cout<<endl;
	cout<<"Obiekt typu kolo:"<<endl;
	kol->print();
	cout<<endl;
	cout<<"Drugi obiekt typu kolo, o wartosci domyslnej:"<<endl;
	kol2[0].print();
	cout<<endl;
	cout<<"Obiekt typu prostokat:"<<endl;
	pro.print();
	cout<<endl;
	cout<<"Zmienna typu int:"<<test<<endl;
	cout<<endl;
	
	cout<<"2. Odwolywanie sie do metody przez wskaznik, dzialanie metody set:"<<endl;
	cout<<endl;
	cout<<"Przed zmiana: "<<endl;
	printUniversal(*kol);
	kol->setR(123);
	cout<<"Po wpisaniu do r wartosci: "<<test<<endl;
	printUniversal(*kol);
	
	
	cout<<"3. Polimorfizm na przyk³adzie tablicy trojwymiarowej, w jednej tablicy mamy kola i prostokaty, oraz prezentacja metody printUniversal:"<<endl;
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
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
			for(int k=0;k<2;k++){
				cout<<"ksz["<<i<<"]["<<j<<"]["<<k<<"]:";
				printUniversal(*figures[i][j][k]);
			}		
	}
	
	cout<<"end"<<endl;
	cout<<endl;
	
	
	cout<<"4. Demonstracja polimorfizmu na przykladzie metody printTwoFigure rozne typy:"<<endl;
	cout<<endl;
	printTwoFigure("", *kol, "", pro);
	cout<<"Te same typy:"<<endl;
	cout<<endl;
	printTwoFigure("", *(new rectangle()), "", pro);
	
	
	cout<<"5. Prezentacja generycznej metody: copyUniversal, kopia dowolnego obiektu:"<<endl;
	cout<<endl;
	rectangle kopiaPro = copyUniversal(pro);
	printTwoFigure("oryginal", pro, "kopia", kopiaPro);
	
	
	cout<<"Po zmianie oryginalu: "<<endl;
	cout<<endl;
	pro.setA(33);
	printTwoFigure("oryginal", pro, "kopia", kopiaPro);
	
	cout<<"Po zmianie kopi: "<<endl;
	cout<<endl;
	kopiaPro.setB(66);
	printTwoFigure("oryginal", pro, "kopia", kopiaPro);
	cout<<endl;
	
	
	cout<<"6. Prezentacja polimorfizmu na przyk³adzie metod: setColorAndPrintUniversal, oraz calculateFieldUniversal"<<endl;
	cout<<endl;
	
	cout<<"Przed uzyciem metody uniwersalnySetKolorAndPrint: "<<endl;
	cout<<endl;
	printUniversal(*kol);
	
	cout<<"Po uzyciu metody uniwersalnySetKolorAndPrint: "<<endl;
	cout<<endl;
	setColorAndPrintUniversal(*kol,"Brazowe");
	cout<<endl;
	
	cout<<"Wartosc zwracana przez metode uniwersalnyGetPole, dla obiektu z poprzedniego przykladu: "<<endl;
	cout<<calculateFieldUniversal(*kol)<<endl;
	cout<<endl;
	
	cout<<"Obiekt typu prostokat, dla ktorego bedzie wywolywana metoda calculateFieldUniversal: "<<endl;
	printUniversal(pro);
	cout<<endl;
	
	cout<<"Wyswietlenie wartosci zwracanej przez metode calculateFieldUniversal: "<<endl;
	cout<<calculateFieldUniversal(pro)<<endl;
	cout<<endl;

	_getch();
	return 0;
}










#include <conio.h> 
#include "source\kolo.hpp"
#include "source\prostokat.hpp"
#include "source\ksztalt.hpp"

void uniwersalnySetKolorAndPrint(ksztalt &ksztalt,string kolor){
	ksztalt.setKolor(kolor);
	ksztalt.print();
};

void uniwersalnyPrint(ksztalt &ksztalt){
	ksztalt.print();
};

template<class T> T uniwersalneCopy(T objekt){
	return objekt;
};

float uniwersalnyGetPole(ksztalt &ksztalt){
	ksztalt.getPole();
};

void printTwoKsztalt(string nazwaKsz1, ksztalt &ksz1, string nazwaKsz2, ksztalt &ksz2){
	
	cout<<nazwaKsz1+": "<<endl;
	ksz1.print();
	
	cout<<nazwaKsz2+": "<<endl;
	ksz2.print();

}



int main(int argc, char *argv[]) {
	
	kolo *kol=new kolo(4,"biale");
	kolo *kol2=new kolo();
	prostokat pro(6,3,"Niebieski");
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
	uniwersalnyPrint(*kol);
	kol->setR(123);
	cout<<"Po wpisaniu do r wartosci: "<<test<<endl;
	uniwersalnyPrint(*kol);
	
	
	cout<<"3. Polimorfizm na przyk³adzie tablicy trojwymiarowej, w jednej tablicy mamy kola i prostokaty, oraz prezentacja metody uniwersalnyPrint( &ksztalt ):"<<endl;
	cout<<endl;
	ksztalt ****ksz=new ksztalt***[2];
	
	for(int i=0;i<3;i++){
		ksz[i]=new ksztalt**[2];
		for(int j=0;j<2;j++){
			ksz[i][j]=new ksztalt*[2];
			for(int k=0;k<2;k++)
				if(k%2==0){
					ksz[i][j][k]=new kolo(5, "bordo");
				}else{
					ksz[i][j][k]=new prostokat(3, 5, "zielony");
				}
		}
				
	}
	cout<<"Wyswietlamy tablice trojwymiarowa z obiektami kolo i prostokat, korzystajac z metody uniwersalnyPrint:"<<endl;
	cout<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
			for(int k=0;k<2;k++){
				cout<<"ksz["<<i<<"]["<<j<<"]["<<k<<"]:";
				uniwersalnyPrint(*ksz[i][j][k]);
			}		
	}
	cout<<"end"<<endl;
	cout<<endl;
	
	
	cout<<"4. Demonstracja polimorfizmu na przykladzie metody printTwoKsztalt( &ksztalt, &ksztalt ) rozne typy:"<<endl;
	cout<<endl;
	printTwoKsztalt("", *kol, "", pro);
	cout<<"Te same typy:"<<endl;
	cout<<endl;
	printTwoKsztalt("", *(new prostokat()), "", pro);
	
	
	cout<<"5. Prezentacja generycznej metody: T uniwersalneCopy(  T), kopia dowolnego obiektu:"<<endl;
	cout<<endl;
	prostokat kopiaPro=uniwersalneCopy(pro);
	printTwoKsztalt("oryginal", pro, "kopia", kopiaPro);
	
	
	cout<<"Po zmianie oryginalu: "<<endl;
	cout<<endl;
	pro.setA(33);
	printTwoKsztalt("oryginal", pro, "kopia", kopiaPro);
	
	cout<<"Po zmianie kopi: "<<endl;
	cout<<endl;
	kopiaPro.setB(66);
	printTwoKsztalt("oryginal", pro, "kopia", kopiaPro);
	cout<<endl;
	
	
	cout<<"6. Prezentacja polimorfizmu na przyk³adzie metod: uniwersalnySetKolorAndPrint( &ksztalt, string ), oraz uniwersalnyGetPole( &ksztalt )"<<endl;
	cout<<endl;
	
	cout<<"Przed uzyciem metody uniwersalnySetKolorAndPrint: "<<endl;
	cout<<endl;
	uniwersalnyPrint(*kol);
	
	cout<<"Po uzyciu metody uniwersalnySetKolorAndPrint: "<<endl;
	cout<<endl;
	uniwersalnySetKolorAndPrint(*kol,"Brazowe");
	cout<<endl;
	
	cout<<"Wartosc zwracana przez metode uniwersalnyGetPole, dla obiektu z poprzedniego przykladu: "<<endl;
	cout<<uniwersalnyGetPole(*kol)<<endl;
	cout<<endl;
	
	cout<<"Obiekt typu prostokat, dla ktorego bedzie wywolywana metoda uniwersalnyGetPole: "<<endl;
	uniwersalnyPrint(pro);
	cout<<endl;
	
	cout<<"Wyswietlenie wartosci zwracanej przez metode uniwersalnyGetPole: "<<endl;
	cout<<uniwersalnyGetPole(pro)<<endl;
	cout<<endl;

	_getch();
	return 0;
}










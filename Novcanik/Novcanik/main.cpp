#include "Novcanica.h"
#include "NovcanicaDinar.h"
#include "NovcanicaStrana.h"
#include "PorodicniNovcanik.h"

void main()
{
	char oz[4] = "EUR";
	double kurs = 117.2;

	Novcanica* p1 = new NovcanicaDinar(100);
	Novcanica* p2 = new NovcanicaDinar(100);
	//n1->Prikazi();
	cout << *p1 << endl;;

	
	Novcanica* p3 = new NovcanicaStrana(100, oz, kurs);
	//n2->Prikazi();

	cout << *p3 << endl;

	PorodicniNovcanik* novcanik = new PorodicniNovcanik(4);
	novcanik->Dodaj(p1);
	novcanik->Dodaj(p1);
	novcanik->Dodaj(p1);
	novcanik->Dodaj(p1);
	novcanik->Dodaj(p2);
	novcanik->Dodaj(p3);

	novcanik->Print();
	
	NovcanicaDinar din(100);
	novcanik->Izdvoji(din, 3);
	cout << "Izdvajanje...."<<endl;
	novcanik->Print();

	NovcanicaDinar din2(20);
	novcanik->Rasitni(din, din2);
	cout << "Usitnjavanje..." << endl;
	novcanik->Print();
}
#include "Novcanica.h"
#include"NovcanicaStrana.h"
#include "NovcanicaDinar.h"
#include "PorodicniNovcanik.h"
#include <iostream>

using namespace std;

void main()
{
	char oz[4] = "EUR";
	double kurs = 117.20;
	// 2 poena
	Novcanica* p1 = new NovcanicaDinar(100);
	//p1->Prikazi();
	cout << *p1 << endl;
	// 2 poena
	Novcanica* p2 = new NovcanicaStrana(50, oz, kurs);
	//p2->Prikazi();
	cout << *p2 << endl;
	int dinari[] = { 100, 20, 200, 500, 100, 100, 200, 500 };
	int evri[] = { 100, 20, 10, 50, 100, 50, 100, 10 };
	PorodicniNovcanik* pNov = new PorodicniNovcanik(10);
	// 2 poena
	for (int i = 0; i < 4; i++)
	{
		pNov->Dodaj(new NovcanicaDinar(dinari[i]));
		pNov->Dodaj(new NovcanicaStrana(evri[i], oz, kurs));
	}
	// 2 poena
	//pe.print();
	cout << *pNov << endl;
	// 2 poena
	for (int i = 4; i < 8; i++)
	{
		pNov->Dodaj(new NovcanicaDinar(dinari[i]));
		pNov->Dodaj(new NovcanicaStrana(evri[i], oz, kurs));
	}
	//pe->print();
	cout << *pNov << endl;
	// 2 poena
	NovcanicaStrana evro(50, oz, kurs);
	pNov->Izdvoji(evro, 2);
	//pe->print();
	cout << *pNov << endl;
	// 1 poena
	NovcanicaDinar dinar100(100);
	pNov->Izdvoji(dinar100, 2);
	//pe->print();
	cout << *pNov << endl;
	// 2 poena
	NovcanicaDinar dinar200(200);
	pNov->Rasitni(dinar200, dinar100);
	//pe->print();
	cout << *pNov << endl;
	// 2 poena
	int placanje = 5000;
	if (pNov->MozePlatiti(placanje))
		cout << "Moze platiti " << placanje << endl; // T
	else
		cout << "Ne moze platiti " << placanje << endl;

	// 2 poena
	Novcanica* novcanicaMin = nullptr, * novcanicaMax = nullptr;
	//pNov->VratiNaj(&novcanicaMin, &novcanicaMax);
	//novcanicaMin->Prikazi(); // 20 1
	//novcanicaMax->Prikazi(); // 100 2 EUR
	// 1 poena
	delete pNov;
}
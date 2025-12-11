#include "ParLezaljkiSaDodatkom.h"
#include <iostream>

using namespace std;

ParLezaljkiSaDodatkom::ParLezaljkiSaDodatkom()
	:ParLezaljki()
{
	brDodatnihLezaljki = 0;
}

ParLezaljkiSaDodatkom::ParLezaljkiSaDodatkom(int rB, int r, int c, int vrednost, int dodatne)
	:ParLezaljki(rB,r,c,vrednost)
{
	brDodatnihLezaljki = dodatne;
}

int ParLezaljkiSaDodatkom::naplata()
{
	return (cena*(1+0.4*brDodatnihLezaljki))+(vrednosNarucenogPica-((40-2*red-5*brDodatnihLezaljki)/100));
}

void ParLezaljkiSaDodatkom::Prikazi()
{
	cout << "Specijalna lezaljka - redni broj: " << redniBroj << ", red: " << red << ", cena: " << cena << ", vrednost pica: " << vrednosNarucenogPica <<", broj dodatnih lezaljki: "<< brDodatnihLezaljki<<", svota za naplatu : " << this->naplata() << endl;
}

void ParLezaljkiSaDodatkom::stampaj(ostream& ost)
{
	ost << "Specijalna lezaljka - redni broj: " << redniBroj << ", red: " << red << ", cena: " << cena << ", vrednost pica: " << vrednosNarucenogPica << ", broj dodatnih lezaljki: " << brDodatnihLezaljki << ", svota za naplatu : " << naplata() << endl;
}



ostream& operator<<(ostream& out, ParLezaljkiSaDodatkom& pd)
{
	pd.stampaj(out);
	return out;
}

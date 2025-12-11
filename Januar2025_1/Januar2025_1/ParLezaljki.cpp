#include "ParLezaljki.h"
#include <iostream>

using namespace std;

ParLezaljki::ParLezaljki()
{
	redniBroj = 0;
	red = 0;
	cena = 0;
	vrednosNarucenogPica = 0;
}

ParLezaljki::ParLezaljki(int rBr, int r, int c, int vrednost)
{
	redniBroj = rBr;
	red = r;
	cena = c;
	vrednosNarucenogPica = vrednost;
}

int ParLezaljki::naplata()
{
	return cena + (vrednosNarucenogPica * ((40 - 2 * red) / 100));
}

void ParLezaljki::Prikazi()
{
	cout << "Obicna lezaljka - redni broj: " << redniBroj << ", red: " << red << ", cena: " << cena << ", vrednost pica: " << vrednosNarucenogPica << ", svota za naplatu: " << naplata() << endl;

}

void ParLezaljki::stampaj(ostream& os)
{
	os << "Obicna lezaljka - redni broj: " << redniBroj << ", red: " << red << ", cena: " << cena << ", vrednost pica: " << vrednosNarucenogPica << ", svota za naplatu: " << naplata() << endl;
}

ostream& operator<<(ostream& out, ParLezaljki& p)
{
	p.stampaj(out);
	return out;
}

#include "NovcanicaStrana.h"
#include <iostream>

using namespace std;

NovcanicaStrana::NovcanicaStrana()
	:Novcanica()
{
	tip = 1;
	kurs = 0;
	kodValute = nullptr;
}

NovcanicaStrana::NovcanicaStrana(int vr, char* valuta, float ks)
	:Novcanica(vr)
{
	tip = 1;
	kurs = ks;
	kodValute = new char[4];
	kodValute = valuta;
}

void NovcanicaStrana::Prikazi()
{
	cout << "Strana: " << vrednost << " " << kodValute << " " << kurs << endl;
}

void NovcanicaStrana::stamp(ostream& os)
{
	os << "Strana: " << vrednost << " " << kodValute << " " << kurs << endl;
}

void NovcanicaStrana::promeniBrNovcanica(int n)
{
	brNovcanica += n;
}

ostream& operator<<(ostream& out, NovcanicaStrana& ns)
{
	ns.stamp(out);
	return out;
}

#include "NovcanicaDinar.h"


NovcanicaDinar::NovcanicaDinar()
	:Novcanica()
{
	tip = 0;
}

NovcanicaDinar::NovcanicaDinar(int vr)
	:Novcanica(vr)
{
	tip = 0;
}

void NovcanicaDinar::Prikazi()
{
	cout <<"Dinar: "<< vrednost << " " << brNovcanica << endl;
}

void NovcanicaDinar::stamp(ostream& os)
{
	os << "Dinar: " << vrednost << " " << brNovcanica << endl;
}

void NovcanicaDinar::promeniBrNovcanica(int n)
{
	brNovcanica += n;
}

ostream& operator<<(ostream& out, NovcanicaDinar& nd)
{
	nd.stamp(out);
	return out;
}

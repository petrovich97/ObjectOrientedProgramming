#include "Novcanica.h"

Novcanica::Novcanica()
{
	vrednost = 0;
	brNovcanica = 0;
	tip = -1;
}

Novcanica::Novcanica(int vr)
{
	vrednost = vr;
	brNovcanica = 0;
	tip = -1;
}

void Novcanica::stamp(ostream& os)
{
	os << vrednost << brNovcanica << endl;
}

ostream& operator<<(ostream& out, Novcanica& n)
{
	n.stamp(out);
	return out;
}

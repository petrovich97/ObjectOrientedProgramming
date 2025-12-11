#include "IspitniMaterijal.h"

IspitniMaterijal::IspitniMaterijal()
{
	this-> jedBr=0;
	this->tezina=0;
	this->savladan= false;
}

IspitniMaterijal::IspitniMaterijal(int jedBr, float tezina)
{
	this->jedBr = jedBr; 
	this->tezina = tezina;
	this->savladan = false;
}

void IspitniMaterijal::ispisi(ostream& os)
{
	{
		os << jedBr << tezina << savladan << "ispitni materijal: " << endl;
		
	}
}

ostream& operator<<(ostream& out, IspitniMaterijal& IM)
{
	IM.ispisi(out);
	return out;
}

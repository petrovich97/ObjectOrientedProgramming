#include <iostream>
#pragma once

using namespace std;

class Novcanica
{
protected:
	int vrednost;
	int brNovcanica;
	int tip; // 0 - domaca(dinar) 1 - strana (kasnije po kodu valute proveravamo koja strana valuta je u pitanju) -1 - default vrednos za novcanicu (nepoznata - nevalidna)
public:
	Novcanica();
	Novcanica(int vr);
	virtual void Prikazi() = 0;
	virtual void stamp(ostream& os);
	friend ostream& operator<< (ostream& out, Novcanica& n);
	virtual int getTip() = 0;
	virtual int getVrednost() {	return vrednost;};
	virtual char* getValuta()
	{
		char din[4] = "___";
		return din;
	};
	virtual int getBrNovcanica() { return brNovcanica; };
	virtual void promeniBrNovcanica(int n) = 0;

};


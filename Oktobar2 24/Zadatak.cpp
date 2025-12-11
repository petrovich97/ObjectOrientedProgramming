#include "Zadatak.h"
#include <iostream>
using namespace std;
Zadatak::Zadatak()
{
	this->brlinija = 0;
}

Zadatak::Zadatak(int jedBr, float tezina, int brlinija)
	//:IspitniMaterijal(jedBr, tezina)
{
	this->jedBr = jedBr;
	this->tezina = tezina;
	this->brlinija = brlinija; 
}

int Zadatak::GetJedBr()
{
	return jedBr;
}

bool Zadatak::savladan1()
{
	return savladan;
}

void Zadatak::ispisi(ostream& os)
{
	os << "Zadatak - jedinstveni broj: " << jedBr << ", tezina:" << tezina << ", Broj linija: " << brlinija << ", savladan: " << savladan << endl;
}

ostream& operator<<(ostream& out, Zadatak& Z )
{
	Z.ispisi(out);
	return out; 
}

void Zadatak::Prikazi()
{
	cout << "Zadatak - jedinstveni broj: " << jedBr << ", tezina:" << tezina << ", Broj linija: " << brlinija << ", savladan: " << savladan << endl;
}


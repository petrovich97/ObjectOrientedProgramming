#include "Lekcija.h"
#include <iostream>
using namespace std;
Lekcija::Lekcija() 
{
	this->duzstr = 0; 
}

Lekcija::Lekcija(int jedBr, float tezina, float duzstr)
	//: IspitniMaterijal( jedBr, tezina)
{
	this->jedBr = jedBr;
	this->tezina = tezina;
	this->duzstr = duzstr; 
}

int Lekcija::GetJedBr()
{
	return jedBr;
}

bool Lekcija::savladan1()
{
	return savladan;
}

void Lekcija::ispisi(ostream& os)
{
	os << "lekcija - jedBroj : " << jedBr << ", tezina je : " << tezina<<", duzina stranica: " << duzstr << ", savladan: "<< savladan << endl;
	
}

ostream& operator<<(ostream& out, Lekcija& L)
{
	L.ispisi(out);
	return out;
}

void Lekcija::Prikazi()
{
	cout << "lekcija - jedBroj : " << jedBr << ", tezina je : " << tezina << ", duzina stranica: " << duzstr << ", savladan: " << savladan << endl;
}


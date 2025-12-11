#include "ParLezaljki.h"
#include <iostream>

using namespace std;

#pragma once
class ParLezaljkiSaDodatkom : public ParLezaljki
{
private:
	int brDodatnihLezaljki;

public:
	ParLezaljkiSaDodatkom();
	ParLezaljkiSaDodatkom(int rB, int r, int c, int vrednost, int dodatne);
	int naplata()override;
	void Prikazi()override;
	void stampaj(ostream& ost);
	int getRB() { return ParLezaljki::getRB(); };
	friend ostream& operator<< (ostream& out, ParLezaljkiSaDodatkom& pd);

};


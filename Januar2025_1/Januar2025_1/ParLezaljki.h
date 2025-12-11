#pragma once
#include <iostream>
using namespace std;
class ParLezaljki
{
protected:
	int redniBroj;
	int red;
	int cena;
	int vrednosNarucenogPica;

public:
	ParLezaljki();
	ParLezaljki(int rBr, int r, int c, int vrednost);
	virtual int naplata();
	virtual void Prikazi();
	virtual int getRB() { return redniBroj; };
	virtual int getCena() { return cena; };
	virtual int getVrednostPica() { return vrednosNarucenogPica; };
	virtual void stampaj(ostream& os);
	friend ostream& operator<< (ostream& out, ParLezaljki& p);
};


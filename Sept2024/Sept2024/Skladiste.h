#pragma once
#include "Voda.h"
#include "Sok.h"
#include "Pice.h"

class Skladiste
{
private:
	Pice* niz;
	int brEl;

public:
	Skladiste(int n);
	~Skladiste();
	void Dodaj(Pice& p);
	void Izdvoji(Pice& p, int brAmbalaza);
	void Presipaj(Pice& p1, Pice& p2);
	bool DovoljnaKolicina(int zapremina);
	void VratiNaj(Pice* pMin, Pice* pMax);

};


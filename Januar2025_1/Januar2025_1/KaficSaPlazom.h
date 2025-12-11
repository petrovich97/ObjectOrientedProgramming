#include "ParLezaljki.h"
#include "ParLezaljkiSaDodatkom.h"
#include <iostream>

using namespace std;

#pragma once
class KaficSaPlazom
{
private:
	ParLezaljki** niz;
	//int tren;
	int kapacitet;
	int vrednosNaplacenogNovca;

public:
	KaficSaPlazom();
	KaficSaPlazom(int k);
	~KaficSaPlazom();
	void Dodaj(ParLezaljki* parLez);
	void Oslobodi(int redBr);
	int UkupnoLezaljki();
	int UkupnaSvotaNovca();
	bool PostojiGdeTrebaPlatiti(int svota);
	void VratiNajskuplje(ParLezaljki** maxCena, ParLezaljki** maxNapitak);
	friend ostream& operator<<(ostream& out, KaficSaPlazom& kp);


};


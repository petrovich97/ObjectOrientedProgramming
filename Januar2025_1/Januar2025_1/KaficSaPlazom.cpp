#include "KaficSaPlazom.h"


KaficSaPlazom::KaficSaPlazom()
{
	kapacitet = 0;
	vrednosNaplacenogNovca = 0;
}

KaficSaPlazom::KaficSaPlazom(int k)
{
	kapacitet = k;
	niz = new ParLezaljki * [kapacitet];
	vrednosNaplacenogNovca = 0;
	for (int i = 0; i < kapacitet; i++)
		niz[i] = nullptr;
}

KaficSaPlazom::~KaficSaPlazom()
{
	if (niz != nullptr)
	{
		for (int i = 0; i < kapacitet; i++)
			delete niz[i];

		delete[] niz;
	}
}

void KaficSaPlazom::Dodaj(ParLezaljki *parLez)
{
	int i = 0;
	while (i < kapacitet && niz[i]!=nullptr)
		i++;
	if (i >= kapacitet)
		cout << "Nema slobodnih mesta" << endl;
	else
		niz[i] = parLez;
}

void KaficSaPlazom::Oslobodi(int redBr)
{
	int i = 0;
	while (niz[i] != nullptr && niz[i]->getRB() != redBr && i < kapacitet)
		i++;

	if (i >= kapacitet || niz[i]==nullptr)
		cout << "Ne postoji trazeni par lezaljki!" << endl;
	else
	{
		this->vrednosNaplacenogNovca += niz[i]->naplata();
		delete niz[i];

		while( niz[i] && i<kapacitet-1)
		{
			niz[i] = niz[i + 1];
			i++;
		}
	}
}

int KaficSaPlazom::UkupnoLezaljki()
{
	int i = 0;
	while (niz[i]!=nullptr && i < kapacitet)
		i++;

	if (i == 0 && !niz[i])
			return 0;
		else
			return i;
}

int KaficSaPlazom::UkupnaSvotaNovca()
{
	int zarada=0;
	int i = 0;
	while (niz[i]!=nullptr && i < kapacitet)
	{
		zarada += niz[i]->naplata();
		i++;
	}
	return zarada;
}

bool KaficSaPlazom::PostojiGdeTrebaPlatiti(int svota)
{
	int i = 0;
	while (niz[i] != nullptr && niz[i]->naplata() > svota && i < kapacitet)
		i++;

	if (i >= kapacitet || niz[i]==nullptr)
		return false;
	else
		return true;
}

void KaficSaPlazom::VratiNajskuplje(ParLezaljki**maxCena, ParLezaljki **maxNapitak)
{
	ParLezaljki* maxC, * maxNap;
	maxC = new ParLezaljki();
	maxNap = new ParLezaljki();
	int i = 0;
	while (niz[i] != nullptr && i < kapacitet )
	{
		if ((niz[i]->getCena() + niz[i]->getVrednostPica() > (maxC->getCena() + maxNap->getVrednostPica())))
		{
			maxC = niz[i];
			
		}
		if (niz[i]->getVrednostPica() > maxNap->getVrednostPica())
		{
			maxNap = niz[i];
			
		}
		i++;
	}
	*maxCena = maxC;
	*maxNapitak = maxNap;
}


ostream& operator<<(ostream& out, KaficSaPlazom& kp)
{
	int i = 0;
	while (i < kp.kapacitet && kp.niz[i])
	{
		out << *kp.niz[i];
		i++;
	}
	return out;
}

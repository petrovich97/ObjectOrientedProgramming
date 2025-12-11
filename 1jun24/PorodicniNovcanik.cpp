#include "PorodicniNovcanik.h"
#include <iostream>
using namespace std;
PorodicniNovcanik::PorodicniNovcanik()
{
	this->niz = nullptr;
	this->tren=0;
	this-> maks=0;
}

PorodicniNovcanik::PorodicniNovcanik(int maks)
{

	this->maks = maks;
	niz = new Novcanica * [this->maks]; 


}

PorodicniNovcanik::~PorodicniNovcanik()
{
	if (niz != nullptr)
	{
		for (int i = 0; i < maks; i++)
			delete niz[i];

		delete[] niz;
	}
}

void PorodicniNovcanik::Dodaj(Novcanica* novaNov)
{
	for (int i = 0; i < tren; i++)
	{
		if (strcmp(niz[i]->GetKod(), novaNov->GetKod())&&(niz[i]->Getvrednost()==novaNov->Getvrednost()))
		{
			niz[i]->promenibrojnovcanica(1); 
		}
	}
	niz[tren++] = novaNov; 
}

void PorodicniNovcanik::Izdvoji(Novcanica& nov, int s)
{
	for (int i = 0; i < tren; i++)
	{
		if (strcmp(niz[i]->GetKod(), nov.GetKod()) && (niz[i]->Getvrednost() == nov.Getvrednost()))
		{
			if (niz[i]->trenbrojNovcanica() == s)
			{
				//niz[i]->umanjibrojnovcanica(s); ovo nije neophodno zato sto gazimo kup sa novcem 

				for (int j = i; j < tren - 1; j++)
				{
					niz[j] = niz[j + 1]; 
				}
				tren--; 
			}
			else

				if (niz[i]->trenbrojNovcanica() > s)
				{
					niz[i]->promenibrojnovcanica(-s);
				}
				else
				cout << "nema dovoljnog broja novcanica" << endl;
		}
	}
}

void PorodicniNovcanik::Rasitni(Novcanica& krupno, Novcanica& sitno)
{
	for (int i = 0; i < tren; i++)
	{
		if (strcmp(niz[i]->GetKod(), krupno.GetKod()) && niz[i]->Getvrednost() == krupno.Getvrednost())
		{
			if (strcmp(niz[i]->GetKod(), sitno.GetKod()) && niz[i]->Getvrednost() == sitno.Getvrednost())
			{
				if ((krupno.Getvrednost() / sitno.Getvrednost()) < sitno.trenbrojNovcanica())
				{
					this->Izdvoji(krupno, 1);

					//for (int j = 0; j < (krupno->Getvrednost() / sitno->Getvrednost()); j++)
					//{
					//	this->Dodaj(sitno);
					//}
					for (int j = 0; j < tren; j++)
					{
						if (strcmp(sitno.GetKod(), niz[i]->GetKod()) && sitno.Getvrednost() == niz[i]->Getvrednost())
						{
							niz[i]->promenibrojnovcanica((krupno.Getvrednost() / sitno.Getvrednost()));
						}
					}
				}	
			}
		}
	}
}

bool PorodicniNovcanik::MozePlatiti(int placanje)
{
	int pom=0; 
	for (int i = 0; i < tren; i++)
	{
		pom += niz[i]->Getvrednost() * niz[i]->getkurs();
	}
	if (pom > placanje)
	{
		return true;
	}
	else return false; 
}

ostream& operator<<(ostream& out, PorodicniNovcanik& p)
{
	for (int i = 0; i < p.tren; i++)
		out << p.niz[i];

		return out;

}

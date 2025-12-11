#include "IspitPriprema.h"



IspitPriprema::IspitPriprema()
{
	this->maks = 0;
	this->tren = 0;
}
IspitPriprema::IspitPriprema(int maks)
{
	this->maks = maks;
	this->tren = 0;
	niz = new IspitniMaterijal * [this->maks]; 
}

IspitPriprema::~IspitPriprema()
{
	if (niz !=nullptr)
	{
		for (int i = 0; i < maks; i++)
			delete niz[i]; 

			delete[] niz; 
	}
}



void IspitPriprema::obrisi(int jedbr)
{
	for (int i = 0; i < tren; i++) {
		if (jedbr == niz[i]->GetJedBr() && !niz[i]->savladan1()) // falio ! kod ovog niz[i]->savladan() jer uslov je da nije savladan
		{
			delete niz[i]; 

			for (int j = i; j < tren - 1; j++)
			{
				niz[j] = niz[j + 1]; 
			}
		}
		
	}
	tren--; 
}

void IspitPriprema::dodaj(IspitniMaterijal* mat)
{
	if (tren < maks-1)
	{
		niz[tren++] = mat; 
	}
}
void IspitPriprema::savladaj(int Id)
{
	for (int i = 0; i < tren; i++)
	{
		if (niz[i]->GetJedBr() == Id)
		{
			niz[i]->settersav(true);

		}
	}
}

int IspitPriprema::ukupnosav()
{
	int pom = 0; 
	for (int i = 0; i < tren; i++)
	{
		if (niz[i]->savladan1())
		{
			pom++; 
		}
	}
	return pom; 
}

void IspitPriprema::print()
{
	for (int i = 0; i < tren; i++)
		niz[i]->Prikazi();
}






//void IspitPriprema::vratiNaj()
//{



//}



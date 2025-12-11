#include "PorodicniNovcanik.h"

PorodicniNovcanik::PorodicniNovcanik()
{
	niz = nullptr;
	tren = 0;
	maks = 0;
}

PorodicniNovcanik::PorodicniNovcanik(int m)
{
	maks = m;
	niz = new Novcanica * [m];
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
	int i = 0;
	int pronadjena = 0;
	while (i < tren && pronadjena == 0)
	{
		if (strcmp(niz[i]->getValuta(), novaNov->getValuta()) == 0 && novaNov->getVrednost() == niz[i]->getVrednost())
		{
			niz[i]->promeniBrNovcanica(1);
			pronadjena = 1;
		}
		i++;
	}
	if (pronadjena == 0)
	{
		if (tren < maks)
		{
			niz[tren] = novaNov;
			niz[tren]->promeniBrNovcanica(1);
			tren++;
		}
		else
			cout << "Novcanik pun!" << endl;
	}

}

void PorodicniNovcanik::Izdvoji(Novcanica& nov, int s)
{
	int i = 0;
	int pronadjena = 0;
	while (i < tren && pronadjena == 0)
	{
		if (strcmp(niz[i]->getValuta(), nov.getValuta()) == 0 && nov.getVrednost() == niz[i]->getVrednost())
		{
			if (niz[i]->getBrNovcanica() == s)
			{
				//niz[i]->umanjibrojnovcanica(s); ovo nije neophodno zato sto gazimo kup sa novcem 
				
				for (int j = i; j < tren - 1; j++)
				{
					niz[j] = niz[j + 1];
				}
				tren--;
				pronadjena = 1;
			}
			else

				if (niz[i]->getBrNovcanica() > s)
				{
					niz[i]->promeniBrNovcanica(-s);
					pronadjena = 1;
				}
				else
					cout << "Nema dovoljnog broja novcanica!" << endl;
		}
		i++;
	}
}

void PorodicniNovcanik::Rasitni(Novcanica& krupno, Novcanica& sitno)
{
	for (int i = 0; i < tren; i++)
	{
		if (strcmp(niz[i]->getValuta(), krupno.getValuta())==0 && niz[i]->getVrednost() == krupno.getVrednost())
		{
			this->Izdvoji(krupno, 1);

			for (int j = 0; j < (krupno.getVrednost() / sitno.getVrednost()); j++)
			{
				this->Dodaj(&sitno);
			}
		}
	}
		
	
}
	


void PorodicniNovcanik::Print()
{
	cout << "Novcanik stampa: " << endl;
	for (int i = 0; i < tren; i++)
		cout << *niz[i];
}





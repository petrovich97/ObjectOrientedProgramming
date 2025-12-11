#pragma once

#include "IspitniMaterijal.h"
class IspitPriprema
{

private: 
	IspitniMaterijal** niz; 
	int maks; 
	int tren; 
public: 
	IspitPriprema();
	IspitPriprema(int maks); 
	~IspitPriprema(); 


//void vratiNaj(); 
void obrisi(int jedbr); 
void dodaj(IspitniMaterijal* mat); 
void savladaj(int Id); 
int ukupnosav(); 
void print();




 friend ostream& operator<<(ostream& out, IspitPriprema& I) //ispitni mat
{
	
	for (int i = 0; i < I.tren; i++)
	{
		out << *I.niz[i]; 
	}
	return out; 
}

};
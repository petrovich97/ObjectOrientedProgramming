#pragma once
#include "Novcanica.h"
#include<iostream>



class PorodicniNovcanik
{
private : 
	Novcanica** niz; 
	int tren; 
	int maks; 

public: 
	PorodicniNovcanik(); 
	PorodicniNovcanik(int maks);
	~PorodicniNovcanik();
	void Dodaj(Novcanica* novaNov); 

	void Izdvoji(Novcanica& nov, int s); 

	void Rasitni(Novcanica& krupno, Novcanica& sitno); 
	bool MozePlatiti(int placanje); 
	friend ostream& operator<< (ostream& out, PorodicniNovcanik& p);
};


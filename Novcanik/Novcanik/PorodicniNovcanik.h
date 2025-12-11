#include "Novcanica.h"
#include "NovcanicaDinar.h"
#include "NovcanicaStrana.h"
#pragma once


class PorodicniNovcanik
{
private:
	Novcanica** niz;
	int tren;
	int maks;

public:
	PorodicniNovcanik();
	PorodicniNovcanik(int m);
	~PorodicniNovcanik();
	void Dodaj(Novcanica* novaNov);
	void Izdvoji(Novcanica& nov, int s);
	void Rasitni(Novcanica& krupno, Novcanica& sitno);
	void Print();
};


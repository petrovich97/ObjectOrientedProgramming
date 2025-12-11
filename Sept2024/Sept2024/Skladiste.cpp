#include "Skladiste.h"
#include "Pice.h"

Skladiste::Skladiste(int n)
{
	niz = new Pice[n];
	brEl = n;
	int pom = niz[1].getProcenat();
}



#include "Novcanica.h"
#include <iostream>

using namespace std;

#pragma once
class NovcanicaDinar : public Novcanica
{
public:
	NovcanicaDinar();
	NovcanicaDinar(int vr);
	void Prikazi();
	void stamp(ostream& os);
	friend ostream& operator<<(ostream& out, NovcanicaDinar& nd);
	int getTip() { return tip; };
	int getVrednost() { return vrednost; };
	char* getValuta() 
	{
		char din[4] = "___";
		return din; };
	void promeniBrNovcanica(int n);
	int getBrNovcanica() { return brNovcanica; };

};


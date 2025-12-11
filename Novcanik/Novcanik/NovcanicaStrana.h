#include "Novcanica.h"
#pragma once
class NovcanicaStrana: public Novcanica
{
private:
	char* kodValute;
	float kurs;
public:
	NovcanicaStrana();
	NovcanicaStrana(int vr, char* valuta, float ks);
	void Prikazi();
	void stamp(ostream& os);
	friend ostream& operator<<(ostream& out, NovcanicaStrana& ns);
	int getTip() { return tip; };
	char* getValuta() { return kodValute; };
	float getKurs() { return kurs; };
	int getVrednost() { return vrednost; };
	void promeniBrNovcanica(int n);
	int getBrNovcanica() { return brNovcanica; };
};


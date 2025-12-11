#pragma once
#include "IspitniMaterijal.h"
class Zadatak : public IspitniMaterijal

{
private: 
	int brlinija; 
public: 
	Zadatak(); 
	Zadatak(int jedBr, float tezina, int brlinija);


	int GetJedBr() override; 
	bool savladan1()override; 
	void ispisi(ostream& os)override;
	friend ostream& operator<<(ostream& out, Zadatak& Z);
	void Prikazi()override;
	void settersav(bool b)
	{
		savladan = b;
	}
};


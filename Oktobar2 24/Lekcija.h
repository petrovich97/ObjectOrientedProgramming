#pragma once
#include "IspitniMaterijal.h"
class Lekcija : public IspitniMaterijal

{
private: 
	float duzstr; 

public: 
	Lekcija(); 
	Lekcija(int jedBr, float tezina, float duzstr); 
		
	int GetJedBr()override; 
	bool savladan1()override; 
	void ispisi(ostream& os)override;
	void Prikazi() override;
	friend ostream& operator<<(ostream& out, Lekcija& L);
	void settersav(bool b) 
	{
		savladan = b; 
	}
	
};


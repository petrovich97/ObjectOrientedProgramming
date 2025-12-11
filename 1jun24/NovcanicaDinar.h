#pragma once
#include "Novcanica.h"

class NovcanicaDinar : public Novcanica
{
private: 
	char* dinar; 
	int kurs; 
public:
	NovcanicaDinar();
	NovcanicaDinar(int vrednost);

	int Getvrednost() override
	{
		return vrednost;
	}
	
	char* GetKod()
	{
		return dinar;
	}
	int trenbrojNovcanica()
	{
		return brojnovcanica;
	}
	void promenibrojnovcanica(int br)
	{
		brojnovcanica += br; 
	}
	float getkurs()
	{
		return kurs;
	}
};


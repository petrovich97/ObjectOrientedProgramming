#pragma once
#include "Novcanica.h"

class NovcanicaStrana : public Novcanica 
{
private: 
	char* kod ;
	double kurs; 
	
public:

	NovcanicaStrana(); 
	NovcanicaStrana(int vrednost, char* kod, double kurs);

	~NovcanicaStrana();
	int Getvrednost() override
	{
		return vrednost;
	}
	

	char* GetKod()
	{
		return kod; 
	}
	void promenibrojnovcanica(int br)
	{
		brojnovcanica += br; 
	}
	int trenbrojNovcanica()
	{
		return brojnovcanica; 
	}
	float getkurs()
	{
		return kurs; 
	}
	


};


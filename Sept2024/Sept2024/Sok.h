#pragma once
#include "Voda.h"

class Sok : public Voda
{
private:
	char* ukusSoka;
	int procenatVoca;
	float odnosCene;
public:
	Sok();
	Sok(int z, char* ukus, int procenat, float odnos);
	int getProcenat();
};


#include "Sok.h"

Sok::Sok()
	:Voda()
{
}

Sok::Sok(int z, char* ukus, int procenat, float odnos)
	:Voda(z)	
{
	ukusSoka = ukus;
	procenatVoca = procenat;
	odnosCene = odnos;
}

int Sok::getProcenat()
{
	return 123;
}

#include "NovcanicaDinar.h"
#include <iostream>


NovcanicaDinar::NovcanicaDinar()
	:Novcanica()
{
	this->kurs = 1;
	strcpy(dinar, "din");
}

NovcanicaDinar::NovcanicaDinar(int vrednost)
: Novcanica(vrednost)
{
	strcpy(dinar, "din");
	this->kurs = 1; 
}

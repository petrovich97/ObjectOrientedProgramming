#include "NovcanicaStrana.h"
#include <iostream>
using namespace std;

NovcanicaStrana::NovcanicaStrana()
	:Novcanica()
{
	this->kod = nullptr;
	this->kurs=0; 
	this-> brojnovcanica;
}

NovcanicaStrana::NovcanicaStrana(int vrednost, char* kod, double kurs)
	: Novcanica(vrednost)
{
	kod = new char[strlen(kod) + 1]; 
	strcpy(this->kod, kod); 
	kurs = kurs;

}

NovcanicaStrana::~NovcanicaStrana()
{

	if (kod != 0)
		delete kod; 
}


#include "Novcanica.h"
#include <iostream>

using namespace std;

Novcanica::Novcanica()
{
	this->vrednost = 0; 
	this->brojnovcanica=0;
}

Novcanica::Novcanica(int vrednost)
{
	this->vrednost = vrednost;
	this->brojnovcanica = 0;
}

Novcanica::~Novcanica()
{
}

void Novcanica::Prikazi()
{
	cout << vrednost << brojnovcanica << endl;
}

void Novcanica::print(ostream& os)
{
	os << vrednost << brojnovcanica << endl;
}

ostream& operator<<(ostream& out, Novcanica& n)
{
	out << n.vrednost << n.brojnovcanica << endl;
	return out;
}

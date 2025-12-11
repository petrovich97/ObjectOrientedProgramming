#include "Str.h"

Str::Str()
{
	s = new char[10];

}

Str::Str(int i)
{
	s = new char[i];
}

Str::~Str()
{
	delete[]s;
}

istream& operator>>(istream& in, Str& string1)
{
	in >> string1.s;
	return in;
}

ostream& operator<<(ostream& out, Str& string1)
{
	out << string1.s;
	return out;
}

int operator==(Str& string1, Str& string2)
{
	if (strcmp(string1.s, string2.s) == 0)
		return 1;
	else
		return 0;
}



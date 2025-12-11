#include <iostream>
#include <string.h>
using namespace std;
#pragma once
class Str
{
private:
	char* s;
public:
	Str();
	Str(int i);
	~Str();
	friend	istream& operator>>(istream& in, Str& string1);
	friend ostream& operator<<(ostream& out, Str& string1);
	friend int operator== (Str& string1, Str& string2);
};


#pragma once
#include <iostream>

using namespace std;

class Novcanica
{
protected:
	int vrednost; 
	int brojnovcanica; 

public: 

	Novcanica(); 
	Novcanica(int vrednost); 


	virtual ~Novcanica();
	//virtual bool istaNovcanica(const Novcanica& druga) const = 0;

	virtual int Getvrednost() = 0;
	virtual char* GetKod() = 0; 
	virtual void promenibrojnovcanica(int br) = 0;
	virtual int trenbrojNovcanica() = 0; 
	virtual float getkurs()=0; 
	virtual void Prikazi();
	virtual void print(ostream& os);
	friend ostream& operator<< (ostream& out, Novcanica& n);

};


#pragma once
#include <iostream>
using namespace std; 
class IspitniMaterijal
{

protected: 
	int jedBr; 
	float tezina; 
	bool savladan; 
public: 
	IspitniMaterijal(); 
	IspitniMaterijal(int jedBr, float tezina); 
	
	virtual int GetJedBr() = 0; 
	virtual bool savladan1() = 0;
	virtual void ispisi(ostream& os);
	friend ostream& operator<< (ostream& out, IspitniMaterijal& IM);
	virtual void Prikazi() = 0;
	
	virtual void settersav(bool b) = 0;
};


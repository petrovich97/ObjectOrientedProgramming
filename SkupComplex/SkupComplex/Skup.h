#include "Complex.h"
#pragma once


class Skup
{
	private:
		int brEl;
		Complex* niz;

	public:
		Skup();
		Skup(int n);
		~Skup();
		Skup razlika(Skup& s);
		Skup unija(const Skup& s);
		Skup presek(const Skup& s);
		void removeDuplicate();
		Skup operator= (const Skup& s);
		friend istream& operator>>(istream& ulaz, Skup& s);
		friend ostream& operator<<(ostream& izlaz, Skup& s);


};
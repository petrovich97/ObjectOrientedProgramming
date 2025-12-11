#include "Skup.h"

Skup::Skup()
{
	brEl = 0;
}

Skup::Skup(int n)
{
	brEl = n;
	niz = new Complex[brEl];
}

Skup::~Skup()
{
	if (niz != 0)
		delete[] niz;
}

Skup Skup::razlika(Skup& s)
{
	
	Skup rez(brEl);  
	int trenutnoElemenata = 0;  
		for (int i = 0; i < brEl; i++)  
		{
			bool isti = false;
			for (int j = 0; j < s.brEl; j++) 
				if (niz[i] == s.niz[j])  
				{
					isti = true; 
					break;  
				}
			
			if (!isti)  
			{
				rez.niz[trenutnoElemenata++] = niz[i];  
			}
		}

		rez.brEl = trenutnoElemenata;  
		rez.removeDuplicate();  

		return rez;
	

}

Skup Skup::unija(const Skup& s)
{
	Skup rez(brEl + s.brEl);

	for (int i = 0; i < brEl; i++)
		rez.niz[i] = niz[i];

	for (int i = 0; i < s.brEl; i++)
		rez.niz[brEl + i] = s.niz[i];

	return rez;
}

Skup Skup::presek(const Skup& s)
{
	Skup rez(brEl);
	int trenutnoElemenata = 0;

	for(int i=0;i<brEl;i++)
		for(int j=0;j<s.brEl;j++)
			if (niz[i] == s.niz[j])
			{
				rez.niz[trenutnoElemenata]=niz[i];
				trenutnoElemenata++;
			}
	rez.brEl = trenutnoElemenata;
	rez.removeDuplicate();
	return rez;
}

void Skup::removeDuplicate()
{
	for (int i = 0; i < brEl - 1; i++)
		for (int j = i + 1; j < brEl; j++)
		{
			if (niz[i] == niz[j])
			{
				for (int z = j; z < brEl - 1; z++)
					niz[z] = niz[z + 1];
				brEl--;
				i--;
			}
		}

}

Skup Skup::operator=(const Skup& s)
{
	Skup rez(s.brEl);
	for (int i = 0; i < rez.brEl; i++)
		rez.niz[i] = s.niz[i];

	return rez;
}

istream& operator>>(istream& ulaz, Skup& s)
{
	for (int i = 0; i < s.brEl; i++)
		ulaz >> s.niz[i];
	return ulaz;
}


ostream& operator<<(ostream& izlaz, Skup& s)
{
	for (int i = 0; i < s.brEl; i++)
		izlaz << s.niz[i] << " | ";
	return izlaz;
}

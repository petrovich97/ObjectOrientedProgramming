#include <iostream>
#include <string.h>
//#include "Str.h" ili ovde includuj klasu za druge tipove koje pravis ili u main 

#pragma once

using namespace std;

template <class Podatak>
class MATRICA
{
	private:
		Podatak** mat; //dinamicka matrica za bilo koji tip podatka
		int n, m; // broj vrsta i kolona
	public:
		MATRICA();
		MATRICA(int n1, int m1);
		~MATRICA();
		Podatak& operator()(int i, int j);
		inline int vratiN() { return n; };
		inline int vratiM() { return m; };
		void ucitaj();
		void stampaj();

};
//////////////////////////////////// do ovde ti je klasican HEADER FILE //////// sad ispod nastavljas definije kao u .cpp 
template <class Podatak>
MATRICA<Podatak>::MATRICA()
{
		n = m = 0;
		mat = 0;
}

template <class Podatak>
MATRICA<Podatak>::MATRICA(int n1, int m1)
{
	n = n1;
	m = m1;

	mat = new Podatak * [n];
	for (int i = 0; i < n; i++)
		mat[i] = new Podatak[m];
}

template<class Podatak>
MATRICA<Podatak>::~MATRICA()
{
	if (mat != 0)
	{
		for (int i = 0; i < n; i++)
			delete[] mat[i];
		delete[] mat;
	}
}

template <class Podatak>
Podatak& MATRICA<Podatak> :: operator()(int i, int j)
{
	return mat[i][j];
}

template <class Podatak>
void MATRICA<Podatak>::ucitaj()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> mat[i][j];
}

template<class Podatak>
void MATRICA<Podatak>::stampaj()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << mat[i][j] << " ";
		cout<<"\n";
	}
}

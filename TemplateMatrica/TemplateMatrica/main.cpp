#include "Matrica.h"
#include "Str.h"

void main()
{
	MATRICA<Str> mat1(2, 2);
	MATRICA<int> mat2(2, 2);
	MATRICA<double> *mat3=new MATRICA<double>(2, 2);

	cout << "Unesite 4 stringa: "<<endl;
	mat1.ucitaj();

	cout << "Unesite 4 int: " << endl;
	mat2.ucitaj();

	cout << "Unesite 4 double: " << endl;
	mat3->ucitaj();

	cout << "Matrica 1: " << endl;
	mat1.stampaj();
	cout << "Matrica 2: " << endl;
	mat2.stampaj();
	cout << "Matrica 1: " << endl;
	mat3->stampaj();

	cout << "Element [1][1] matrice mat1:" << endl;
	cout << mat1(1, 1);
}
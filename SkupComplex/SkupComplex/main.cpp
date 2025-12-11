#include <iostream>
#include <fstream>
#include "Complex.h"
#include "Skup.h"

using namespace std;

void main()
{
	Complex c1;
	cout << "Unesi vrednosti za kompleksni broj: " << endl;
	cin >> c1;

	cout << c1 << endl;

	cout << "------------------------------" << endl;

	Skup* a= new Skup(10);;
	Skup* b = new Skup(9);

	ifstream inFile1("ulaz1.txt", ios::in);

	if (!inFile1)
		cout << "GRESKA PRILIKOM OTVARANJA FAJLA ULAZ1!!!" << endl;
	else
		inFile1 >> *a;

	inFile1.close();

	ifstream inFile2("ulaz2.txt", ios::in);

	if (!inFile2)
		cout << "GRESKA PRILIKOM OTVARANJA FAJLA ULAZ2!!!" << endl;
	else
		inFile2 >> *b;

	inFile2.close();


	ofstream outFile1("izlazRazlika.txt", ios::out);
	Skup razlika=a->razlika(*b);
	outFile1 << razlika;
	outFile1.close();
	
	ofstream outFile2("izlazPresek.txt", ios::out);

	Skup presek =a->presek(*b);
	outFile2 << presek;
	outFile2.close();

	ofstream outFile3("izlazUnija.txt", ios::out);
	Skup unija = a->unija(*b);
	outFile3 << unija;
	outFile3.close();

	
	

	cout << *a;

}

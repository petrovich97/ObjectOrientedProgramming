#pragma once
#include <iostream>

using namespace std;

class Complex
{
	private:
		double re;
		double im;

	public:
		Complex();
		Complex(double r, double i);
		inline double getRe() { return re; };
		inline double getIm() { return im; };
		Complex saberi(const Complex& c1, const Complex& c2);
		Complex oduzmi(const Complex& c1, const Complex& c2);
		friend istream& operator>> (istream& ulaz, Complex& c);
		friend ostream& operator<< (ostream& izlaz, Complex& c);
		bool operator== (const Complex& c);
		bool operator!= (const Complex& c);


};
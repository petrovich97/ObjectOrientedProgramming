#include "Complex.h"

Complex::Complex()
{
	re = 0;
	im = 0;
}

Complex::Complex(double r, double i)
{
	re = r;
	im = i;
}

Complex  Complex::saberi(const Complex& c1, const Complex& c2)
{
	Complex rez;
	rez.re = c1.re + c2.re;
	rez.im = c1.im + c2.im;

	return rez;
}

Complex  Complex::oduzmi(const Complex& c1, const Complex& c2)
{
	Complex rez;
	rez.re = c1.re - c2.re;
	rez.im = c1.im - c2.im;

	return rez;

}

bool Complex::operator==(const Complex& c)
{
	if(re==c.re && im==c.im)
	return true;
	else
		return false;
}

bool Complex::operator!=(const Complex& c)
{
	if (re == c.re && im == c.im)
		return false;
	else
		return true;
}

 istream& operator>> (istream& ulaz, Complex& c)
	{
	 ulaz >> c.re >> c.im;
	 return ulaz;
	}

 ostream& operator<<(ostream& izlaz, Complex& c)
 {
	 izlaz << c.re << "+" << c.im<<"i";
	 return izlaz;
 }


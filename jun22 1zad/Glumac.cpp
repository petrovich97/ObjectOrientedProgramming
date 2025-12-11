#include "Glumac.h"
#include <iostream>
using namespace std;

Glumac::Glumac() : brrekvzit(0), poenziriideja(0), brpoenizvodjenje(0) {}

Glumac::Glumac(const char* ime, const char* prezime, int rednibr, int poenpub,
    int brrekvzit, int poenziriideja, int brpoenizvodjenje)
    : Ucesnik(ime, prezime, rednibr, poenpub), brrekvzit(brrekvzit),
    poenziriideja(poenziriideja), brpoenizvodjenje(brpoenizvodjenje) {
}

Glumac::~Glumac() {}

bool Glumac::setterpoenideja(int poen) {         
    if (poen >= 0 && poen <= 50) {
        poenziriideja = poen;
        return true;
    }
    cout << "Nevalidan broj poena žirija za ideju!" << endl;
    return false;
}

bool Glumac::setterpoenizvdj(int poen) {          
    if (poen >= 0 && poen <= 50) {
        brpoenizvodjenje = poen;
        return true;
    }
    cout << "Nevalidan broj poena žirija za izvoðenje!" << endl;
    return false;
}

int Glumac::ukupnopoena() {                        
    return poenpub + poenziriideja + brpoenizvodjenje;
}

bool Glumac::narednikrug() {                     
    int poenzirija = poenziriideja + brpoenizvodjenje;
    if (poenzirija >= 50 && ukupnopoena() >= 100) {  // <100 bilo ja sam prepravio?
        return true;
    }
    return false;
}

int Glumac::poeniziri() { return poenziriideja + brpoenizvodjenje; }
int Glumac::pomocosoblje() { return brrekvzit; }
void Glumac::upisi(ostream& os) {                 
   Ucesnik::upisi(os);                           // ne mora 
    os << brrekvzit << " " << poenziriideja << " " << brpoenizvodjenje << endl;
 }



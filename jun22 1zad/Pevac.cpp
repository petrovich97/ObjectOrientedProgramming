#include "Pevac.h"
#include <cstring>
#include <iostream>
using namespace std;

Pevac::Pevac() : pesma(nullptr), brinstr(0), brvokala(0), poenmuzziri(0) {}

Pevac::Pevac(const char* ime, const char* prezime, int rednibr, int poenpub,
    const char* pesma, int brinstr, int brvokala, int poenmuzziri)
    : Ucesnik(ime, prezime, rednibr, poenpub), brinstr(brinstr), brvokala(brvokala),
    poenmuzziri(poenmuzziri) {
    this->pesma = new char[strlen(pesma) + 1];
    strcpy(this->pesma, pesma);
}

Pevac::~Pevac() {
    if (pesma) delete[] pesma;
}

bool Pevac::setterpoenmuzziri(int poen) {       
    if (poen >= 0 && poen <= 50) {
        poenmuzziri = poen;
        return true;
    }
    cout << "Nevalidan broj poena muzièkog žirija!" << endl;
    return false;
}

int Pevac::ukupnopoena() { return poenpub + poenmuzziri; }
bool Pevac::narednikrug() { return poenmuzziri >= 25 && ukupnopoena() >= 100; } 
int Pevac::poeniziri() { return poenmuzziri; }
int Pevac::pomocosoblje() { return brinstr + brvokala; }

void Pevac::upisi(ostream& os) {                 
   Ucesnik::upisi(os);                  // i ovo ne mora 
    os << pesma << " " << brinstr << " " << brvokala << " " << poenmuzziri << endl;
}




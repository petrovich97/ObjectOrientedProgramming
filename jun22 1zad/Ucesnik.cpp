#include "Ucesnik.h"
#include <cstring>
#include <iostream>
using namespace std;

Ucesnik::Ucesnik() {
    ime = nullptr;
    prezime = nullptr;
    rednibr = 0;
    poenpub = 0;
}

Ucesnik::Ucesnik(const char* ime, const char* prezime, int rednibr, int poenpub) {
    this->ime = new char[strlen(ime) + 1];
    strcpy(this->ime, ime);
    this->prezime = new char[strlen(prezime) + 1];
    strcpy(this->prezime, prezime);
    this->rednibr = rednibr;
    this->poenpub = poenpub;
}

Ucesnik::~Ucesnik() {
    delete[] ime;      
    delete[] prezime;  
}


bool Ucesnik::setterpub(int poen) {
    if (poen >= 0 && poen <= 100) {  
        poenpub = poen;
        return true;
    }
    cout << "Nevalidan broj poena publike!" << endl;
    return false;
}


void Ucesnik::upisi(ostream& os) {

    os << ime << " " << prezime << " " << rednibr << " " << poenpub << " "; 
}

#pragma once
#include "Ucesnik.h"
#include <fstream>
using namespace std;

class Takmicenje {
private:
    Ucesnik** niz;
    int brojucesnika;
    int maksbroj;
public:
    Takmicenje();
    Takmicenje(int maksbroj);
    ~Takmicenje();

    void dodaj(Ucesnik* p);
    void izbaci(Ucesnik* p);      
    int srvrednost();                
    Ucesnik* najvisepoen();
    void sortiraj();                
    void upisiSve(const string& filename);
};



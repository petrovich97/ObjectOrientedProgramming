#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Ucesnik {
protected:
    char* ime;
    char* prezime;
    int rednibr;
    int poenpub;
public:
    Ucesnik();
    Ucesnik(const char* ime, const char* prezime, int rednibr, int poenpub);
    virtual ~Ucesnik(); 

    virtual bool narednikrug() = 0;
    virtual int ukupnopoena() = 0;
    bool setterpub(int poen);
    virtual int poeniziri() = 0;
    virtual int pomocosoblje() = 0;

    
    virtual void upisi(ostream& os);
};




#pragma once
#include "Ucesnik.h"
#include <fstream>

class Glumac : public Ucesnik {
private:
    int brrekvzit;
    int poenziriideja;
    int brpoenizvodjenje;
public:
    Glumac();
    Glumac(const char* ime, const char* prezime, int rednibr, int poenpub,
        int brrekvzit, int poenziriideja, int brpoenizvodjenje);
    ~Glumac();

    bool setterpoenideja(int poen);      
    bool setterpoenizvdj(int poen);       

    int ukupnopoena() override;
    bool narednikrug() override;          
    int poeniziri() override;
    int pomocosoblje() override;

    void upisi(ostream& os) override;   
    
};


#pragma once
#include "Ucesnik.h"
#include <fstream>

class Pevac : public Ucesnik {
private:
    char* pesma;
    int brinstr;
    int brvokala;
    int poenmuzziri;
public:
    Pevac();
    Pevac(const char* ime, const char* prezime, int rednibr, int poenpub,
        const char* pesma, int brinstr, int brvokala, int poenmuzziri);
    ~Pevac();

    bool setterpoenmuzziri(int poen);            
    bool narednikrug() override;                  
    int ukupnopoena() override;
    int poeniziri() override;
    int pomocosoblje() override;
    void upisi(ostream& os) override;           

 
};

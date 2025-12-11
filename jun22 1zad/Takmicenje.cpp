#include "Takmicenje.h"
#include <iostream>
#include <fstream>
using namespace std;


Takmicenje::Takmicenje() : niz(nullptr), brojucesnika(0), maksbroj(0) {}

Takmicenje::Takmicenje(int maksbroj) : maksbroj(maksbroj), brojucesnika(0) {
    niz = new Ucesnik * [maksbroj];
    for (int i = 0; i < maksbroj; i++) 
        niz[i] = nullptr;
   
}

// Destruktor
Takmicenje::~Takmicenje() {
    for (int i = 0; i < brojucesnika; i++)
        delete niz[i];        
    delete[] niz;             
}

// Dodavanje uèesnika
void Takmicenje::dodaj(Ucesnik* p) {
    if (brojucesnika < maksbroj)
        niz[brojucesnika++] = p; 
}

// Brisanje uèesnika
void Takmicenje::izbaci(Ucesnik* p) {
    for (int i = 0; i < brojucesnika; i++) {
        if (niz[i] == p) {
            delete niz[i];                      
            for (int j = i; j < brojucesnika - 1; j++)
                niz[j] = niz[j + 1];            
            brojucesnika--;                     
            break;
        }
    }
}

// Proseèna vrednost poena uèesnika koji prolaze u naredni krug
int Takmicenje::srvrednost() {
    int suma = 0, br = 0;
    for (int i = 0; i < brojucesnika; i++) {
        if (niz[i]->narednikrug()) {      
            suma += niz[i]->ukupnopoena(); 
            br++;
        }
    }
    return br ? suma / br : 0;   //chat        
}

// Pronalaženje uèesnika sa najveæim brojem poena
Ucesnik* Takmicenje::najvisepoen() {
    Ucesnik* najbolji = nullptr;
    int max = -1;
    for (int i = 0; i < brojucesnika; i++) {
        if (niz[i]->narednikrug() && niz[i]->ukupnopoena() > max) {
            max = niz[i]->ukupnopoena();
            najbolji = niz[i];
        }
    }
    return najbolji;
}

// Sortiranje uèesnika po broju pomoænog osoblja
void Takmicenje::sortiraj() {
    for (int i = 0; i < brojucesnika - 1; i++) {
        for (int j = i + 1; j < brojucesnika; j++) {
            if (niz[i]->pomocosoblje() < niz[j]->pomocosoblje())
                swap(niz[i], niz[j]);   // chat
        }
    }
}

// Upis svih uèesnika u fajl
//void Takmicenje::upisiSve(const string& filename) { //moze i sa const char* filename
//    ofstream os(filename);
//    for (int i = 0; i < brojucesnika; i++)
//        niz[i]->upisi(os);             // PREPRAVLJENO: koristi upisi funkciju uèesnika
//    os.close();
//}
void Takmicenje::upisiSve(const string& filename)
{
    ofstream outFile(filename, ios::out);

    if (!outFile)
        cout << "GRESKA PRILIKOM OTVARANJA FAJLA!!!" << endl;
    else
    {
        for (int i = 0; i < brojucesnika; i++)
            niz[i]->upisi(outFile);  

        outFile.close();              
    }
}

#include "Takmicenje.h"
#include "Glumac.h"
#include "Pevac.h"
#include <iostream>
using namespace std;

int main() {
    Takmicenje t(10);

    Glumac* g1 = new Glumac("Marko", "Maric", 1, 20, 3, 30, 25); 
    Pevac* p1 = new Pevac("Halid", "Beslic", 2, 15, "Romanija", 2, 1, 30); 
    Pevac* p2 = new Pevac("Ceca", "Raznatovic", 3, 53, " Kadbibioranjen", 4, 1, 60);
    Pevac* p3 = new Pevac("Sinan", "Sakic", 4, 57, "NeTraziJeSine", 6, 4, 70);
    t.dodaj(g1);
    t.dodaj(p1);
    t.dodaj(p2);
    t.dodaj(p3);

    cout << "Prosecna vrednost poena: " << t.srvrednost() << endl; 

    Ucesnik* najbolji = t.najvisepoen();
    if (najbolji) {
        cout << "Ucesnik sa najvise poena je:" << endl;
        najbolji->upisi(cout);  // ovo radi ako prepravis upisi() da prihvata ostream& a ne samo ofstream& 
    }
    else {
        cout << "Nijedan ucesnik nije prosao u naredni krug." << endl;
    }
 



    t.sortiraj();                         
    t.upisiSve("takmicenje.txt");        

    t.izbaci(p1);                       

 


    return 0;
}


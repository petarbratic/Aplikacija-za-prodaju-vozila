#include <iostream>
#include <fstream>
#include "Korisnik.hpp"
#include "MestoProdaje.hpp"
#include "Kamion.hpp"
#include "Menjac.hpp"
#include "Marka.hpp"
#include "OpremaZaAuto.hpp"
#include "OpremaZaKamion.hpp"
#include "Registracija.hpp"
#include "Skoljka.hpp"
#include "Motor.hpp"
#include "Automobil.hpp"

using namespace std;

int Vozilo::brojVozila=0;

ostream& operator<<(ostream& izlaz, const MestoProdaje& mp){
    izlaz<<"Mesto prodaje - ispis"<<endl;
    cout<<"Drzava: "<< mp.drzava<<endl;
    cout<<"Okrug: "<< mp.okrug<<endl;
    cout<<"Grad: "<< mp.grad<<endl<<endl;
}

ostream& operator<<(ostream& izlaz, const Motor& engine){
    izlaz<<"Motor - ispis"<<endl;
    cout<<"Snaga: "<< engine.snaga<<endl;
    cout<<"Zapremina: "<< engine.zapremina<<endl;
    cout<<"Kilometraza: "<< engine.kilometraza<<endl;
    switch (engine.gorivo){
                case 0: {cout << "BENZIN" << endl;
                        break;}
                case 1: {cout << "DIZEL" << endl;
                        break;}
                case 2: {cout << "BENZINIGAS" << endl;
                        break;}
                case 3: {cout << "STRUJA" << endl;
                        break;}
                case 4: {cout << "HIBRID" << endl;
                        break;}
            }
}

ostream& operator << (ostream& izlaz, const Skoljka& skolj){
    izlaz<<"Skoljka - ispis"<<endl;
    cout<<"Boja: "<< skolj.boja<<endl;
    switch (skolj.materijal){
                case 0: {std::cout << "CELIK" << std::endl;
                        break;}
                case 1: {std::cout << "ALUMINIJUM" << std::endl;
                        break;}
                case 2: {std::cout << "KARBON" << std::endl;
                        break;}
            }
            switch (skolj.karoserija){
                case 0: {std::cout << "LIMUZINA" << std::endl;
                        break;}
                case 1: {std::cout << "KARAVAN" << std::endl;
                        break;}
                case 2: {std::cout << "HECBEK" << std::endl;
                        break;}
                case 3: {std::cout << "SUV" << std::endl;
                        break;}
                case 4: {std::cout << "KABRIOLET" << std::endl;
                        break;}
            }
}


int main()
{

    /* predlog funkcionalnosti
    1. logovanje, registrovanje korisnika i slanje pitanja prodavcu u vezi sa nekim vozilom
    2. kada se korisnik uloguje prikazuju mu se sva vozila koja su u ponudi, on moze da izabere da sacuva vozilo,
     ako oznaci da je kupio neko vozilo od tih saèuvanih ispisuje se ponuda na primer pneumatika, ulja, felni, ratkapni
    */

    /* string nasFajl = "korisnici.txt";

    Korisnik k1("Nikola", "Petric", true, "064423523", "nikola123", "1234");
    k1.pisiTxt(nasFajl, k1, 'w');
    Korisnik k2 ("Nenad", "Lukic", false, "065123543", "ekstranesa", "neskho");
    k2.pisiTxt(nasFajl, k2, 'a');
    Korisnik k3 ("Kosta", "Konstantinovic", true, "060567432", "karatekosta", "kostaprekomosta");
    k3.pisiTxt(nasFajl, k3, 'a');
    k3.citajTxt(nasFajl);

    cout << "\n"<<endl;
    */

    MestoProdaje mesto1("Srbija", "Toplicki", "Arandjelovac");
    // mesto1.ispisiMestoProdaje();
    cout<<mesto1;
    cout << "\n"<<endl;

    /* Menjac vm1 (AUTOMATSKI, 5);
    vm1.ispisiMenjac();
    cout << "\n"<<endl; */

    /* Marka marka1("Volkswagen", 1937, "Nemacka");
    marka1.ispisiMarka();
    cout << "\n"<<endl; */

    /* Registracija r1 (2021, "b", "NS143IP");
    r1.ispisiRegistracija();
    cout << "\n"<<endl; */

    Skoljka sk1 ("crvena", LIMUZINA, CELIK);
    // sk1.ispisiSkoljka();
    cout<<sk1;
    cout << "\n"<<endl;

    Motor motor1 (101, 1698, 123000, DIZEL);
    // motor1.ispisiMotor();
    cout<<motor1;
    cout << "\n"<<endl;

    /* OpremaZaAuto o1(true,false,true,false,true,false,true,false,false);
    o1.ispisiOpremaZaAuto();
    cout << "\n"<<endl; */

    /* OpremaZaKamion ok1 (true,false,true,false,true,false);
    ok1.ispisiOpremaZaKamion();
    cout << "\n"<<endl; */

    Kamion kamion1 ("Nenad", "Lukic", true, "063521132", "ekstraneskho", "nena",
               730, 13000, 999324, DIZEL, "Srbija", "Juznobacki",
               "Veternik", "siva", KARAVAN, CELIK, 2021, "c", "NS123AB", "Scania",1891,
               "Nemacka", AUTOMATSKI, 12, true, true, true, true, false, true);
    // kamion1.ispisiKamion();
    cout << "\n"<<endl;

    Automobil auto1 ("Nenad", "Lukic", true, "06734123", "ekstrajugo", "jugu",
                     55, 900, 20345, BENZINIGAS, "Srbija", "Severnobacki", "Apatin",
                     "crvena", HECBEK, CELIK, 2021, "b", "NS544RR", "Zastava", 1945,
                     "Jugoslavija", MANUELNI, 4, false, false, false, false, true,
                     false, true, false, false);
    // auto1.ispisiAutomobil();
    cout << "\n" <<endl;

    Automobil auto2 ("Teodor", "Perunicic", true, "06754133", "teofeel", "teo123",
                     93, 1988, 1026, DIZEL, "Srbija", "Severnobacki", "Apatin",
                     "crvena", HECBEK, CELIK, 2021, "b", "NS544RR", "Zastava", 1945,
                     "Jugoslavija", MANUELNI, 4, false, false, false, false, true,
                     false, true, false, false);
    // auto2.ispisiAutomobil();
    cout << "\n" <<endl;

    auto2.ispisiBrojVozila();
    return 0;
}

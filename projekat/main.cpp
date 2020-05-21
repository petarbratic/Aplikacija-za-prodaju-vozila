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
#include "Izlog.hpp"
#include "Baza.hpp"
#include <stdlib.h>
using namespace std;

int Vozilo::brojVozila=0;

ostream& operator<<(ostream& izlaz, const MestoProdaje& mp)
{
    izlaz<<"Mesto prodaje - ispis"<<endl;
    izlaz<<"Drzava: "<< mp.drzava<<endl;
    izlaz<<"Okrug: "<< mp.okrug<<endl;
    izlaz<<"Grad: "<< mp.grad<<endl<<endl;
    return izlaz;
}

ostream& operator<<(ostream& izlaz, const Motor& engine)
{
    izlaz<<"Motor - ispis"<<endl;
    cout<<"Snaga: "<< engine.snaga<<endl;
    cout<<"Zapremina: "<< engine.zapremina<<endl;
    cout<<"Kilometraza: "<< engine.kilometraza<<endl;
    switch (engine.gorivo)
    {
    case 0:
    {
        cout << "BENZIN" << endl;
        break;
    }
    case 1:
    {
        cout << "DIZEL" << endl;
        break;
    }
    case 2:
    {
        cout << "BENZINIGAS" << endl;
        break;
    }
    case 3:
    {
        cout << "STRUJA" << endl;
        break;
    }
    case 4:
    {
        cout << "HIBRID" << endl;
        break;
    }
    }
    return izlaz;
}

ostream& operator << (ostream& izlaz, const Skoljka& skolj)
{
    izlaz<<"Skoljka - ispis"<<endl;
    cout<<"Boja: "<< skolj.boja<<endl;
    switch (skolj.materijal)
    {
    case 0:
    {
        std::cout << "CELIK" << std::endl;
        break;
    }
    case 1:
    {
        std::cout << "ALUMINIJUM" << std::endl;
        break;
    }
    case 2:
    {
        std::cout << "KARBON" << std::endl;
        break;
    }
    }
    switch (skolj.karoserija)
    {
    case 0:
    {
        std::cout << "LIMUZINA" << std::endl;
        break;
    }
    case 1:
    {
        std::cout << "KARAVAN" << std::endl;
        break;
    }
    case 2:
    {
        std::cout << "HECBEK" << std::endl;
        break;
    }
    case 3:
    {
        std::cout << "SUV" << std::endl;
        break;
    }
    case 4:
    {
        std::cout << "KABRIOLET" << std::endl;
        break;
    }
    }
    return izlaz;
}


int main()
{

    Kamion kamion1 (601,"Jaric", "Zivadin", true, "063521132", "ekstraneskho", "nena",
                    730, 13000, 999324, DIZEL, "Srbija", "Juznobacki",
                    "Veternik", "siva", KARAVAN, CELIK, 2021, "c", "NS123AB", "Scania",1891,
                    "Nemacka", AUTOMATSKI, 12, true, true, true, true, false, true);


    Automobil auto1 (101,"Nenad", "Lukic", true, "06734123", "ekstrajugo", "jugu",
                     55, 900, 20345, BENZINIGAS, "Srbija", "Severnobacki", "Apatin",
                     "crvena", HECBEK, CELIK, 2021, "b", "NS544RR", "Zastava", 1945,
                     "Jugoslavija", MANUELNI, 4, false, false, false, false, true,
                     false, true, false, false);

    Automobil auto2 (102,"Teodor", "Perunicic", true, "06754133", "teofeel", "teo123",
                     93, 1988, 1026, DIZEL, "Srbija", "Severnobacki", "Apatin",
                     "crvena", HECBEK, CELIK, 2021, "b", "NS544RR", "BMW", 1945,
                     "Jugoslavija", MANUELNI, 4, false, false, false, false, true,
                     false, true, false, false);
    Automobil auto3 (103,"Nikola", "Petric", true, "06355138", "hashim", "tachi",
                     60, 2012, 1600, DIZEL, "Srbija", "Juznobacki", "Futog",
                     "zelena", KARAVAN, KARBON, 2022, "b", "NS324NV", "Skoda", 1893,
                     "Ceska", MANUELNI, 5, true, true, false, false, true,
                     false, true, false, true);
    Vozilo v1 (901,"Pavle", "Cutura", true, "06734123", "ekstrajugo", "jugu",
               55, 900, 20345, BENZINIGAS, "Srbija", "Severnobacki", "Apatin",
               "crvena", HECBEK, CELIK, 2021, "b", "NS544RR", "Zastava", 1945,
               "Jugoslavija", MANUELNI, 4);

    Automobil auto4 (104,"Vukasin", "Skrbic", true, "061233788", "vule", "5678",
                     121, 1947, 176558, STRUJA, "Srbija", "Srednjebacki", "Crvenka",
                     "siva", SUV, ALUMINIJUM, 2020, "b", "NS096VU", "Mazda", 1920,
                     "Japan", MANUELNI, 5, true, true, true, true, true,
                     false, true, false, false);
    Automobil auto5 (105,"Milan", "Savic", true, "062135246", "mimi", "anime",
                     198, 2687, 17143, DIZEL, "Srbija", "Banatski", "Kikinda",
                     "roza", LIMUZINA, CELIK, 2020, "b", "NS367MI", "Audi", 1909,
                     "Nemacki", AUTOMATSKI, 7, true, true, true, true, true,
                     true, true, true, true);



    Izlog i(BEOGRAD);
    i.dodaj(&auto1);
    i.dodaj(&auto2);
    i.dodaj(&auto3);
    i.dodaj(&kamion1);
    i.dodaj(&v1);
    Izlog i2 (NOVI_SAD);
    i2.dodaj(&auto4);
    i2.dodaj(&auto5);


    string nasFajlKorisnici = "korisnici.txt";
    string korisnickoime;
    string sifra;

    int izbor=0;
    int izbor2=0;
    Baza b1("a");

    char sacuv;
    int sacuv2;
    string unos_ime;
    string unos_prezime;
    string pretkomora;
    int xstr;
    int xstr2;
    string kupac="kupac";
    string prodavac="prodavac";
    int znak=0;
    bool unos_kilip;
    string unos_brojTelefona;
    string unos_korisnickoime;
    string unos_lozinka;
    do
    {

        cout<<"-----APLIKACIJA ZA PRODAJU VOZILA-----"<<endl;
        cout<<"  1.Prijava korisnika"<<endl;
        cout<<"  2.Registracija korisnika"<<endl;
        cout<<"  3.Pregled svih vozila"<<endl;
        cout<<"  4.Pregled vozila na placu u Novom Sadu"<<endl;
        cout<<"  5.Pregled vozila na placu u Beogradu"<<endl;

        cout<<"  6.Izlaz"<<endl;
        cout<<"Unesite broj sa tastature: ";
        cin>>izbor;
        system("CLS");
        switch (izbor)
        {
        case 1:
            cout <<"-----PRIJAVA KORISNIKA-----"<<endl;
            cout<<"Unesite korisnicko ime: "<<endl;
            cin>>korisnickoime;
            cout<<"Unesite lozinku: "<<endl;
            cin>>sifra;
            system("CLS");
            if(b1.ucitajKorisnikeLog("korisnici.txt", korisnickoime, sifra)==1)
            {
                do
                {
                    cout<<"-----"<<korisnickoime<<"-----"<<endl;
                    cout<<"  1.Pregled svih vozila"<<endl;
                    cout<<"  2.Pregled vozila na placu u Novom Sadu"<<endl;
                    cout<<"  3.Pregled vozila na placu u Beogradu"<<endl;
                    cout<<"  4.Sacuvana vozila"<<endl;
                    cout<<"  5.Glavni meni"<<endl;
                    cout<<"Unesite broj sa tastature: ";
                    cin>>izbor2;
                    system("CLS");
                    switch(izbor2)
                    {
                    case 1:
                    {
                        i.ispisiSvaVozila();
                        i2.ispisiSvaVozila();

                        cout<<"Da li zelite da sacuvate neko vozilo? (Y/N)"<<endl;
                        cin>>sacuv;
                        if(sacuv=='Y')
                        {
                            cout<<"Unesite id zeljenog vozila: ";
                            cin>>sacuv2;

                        }
                        if(sacuv=='N')
                        {
                            cout<<"ne zeli da sacuva vozilo"<<endl;
                        }


                        break;
                    }
                    case 2:
                        i2.ispisiVozila();
                        break;
                    case 3:
                        i.ispisiVozila();
                        break;
                    case 4:
                        cout << "4 opcija"<<endl;
                        break;
                    }

                }
                while (izbor2!=5);
            }
            else
            {
                cout<<"Pogresno korisnicko ime ili lozinka"<<endl;
            }
            break;
        case 2:
        {

            cout <<"-----REGISTRACIJA KORISNIKA-----"<<endl;
            cout <<"Unesite ime: "<<endl;
            cin>>unos_ime;
            cout <<"Unesite prezime: "<<endl;
            cin>>unos_prezime;
            do
            {
                cout <<"Da li ste kupac ili prodavac? "<<endl;
                cin>>pretkomora;
                xstr=pretkomora.compare(kupac);
                if(xstr==0)
                {
                    unos_kilip=false;
                    znak=1;
                }
                xstr2=pretkomora.compare(prodavac);
                if(xstr2==0)
                {
                    unos_kilip=true;
                    znak=1;
                }

            }
            while (znak!=1);
            cout <<"Unesite broj telefona: "<<endl;
            cin>>unos_brojTelefona;
            cout <<"Unesite korisnicko ime: "<<endl;
            cin>>unos_korisnickoime;
            cout <<"Unesite lozinku: "<<endl;
            cin>>unos_lozinka;
            Korisnik k (unos_ime, unos_prezime, unos_kilip, unos_brojTelefona, unos_korisnickoime,unos_lozinka);
            k.pisiTxt(nasFajlKorisnici, k, 'a');
            b1.dodaj(k);
            b1.ucitajKorisnike("korisnici.txt");


            break;
        }
        case 3:
        {
            cout <<"-----PREGLED SVIH VOZILA-----"<<endl;
            i.ispisiSvaVozila();
            cout<<"Da li zelite da sacuvate neko vozilo? (Y/N)"<<endl;
            cin>>sacuv;
            if(sacuv=='Y')
            {
                cout<<"Unesite id zeljenog vozila: ";
                cin>>sacuv2;

            }
            if(sacuv=='N')
            {
                cout<<"ne zeli da sacuva vozilo"<<endl;
            }
            break;
        }
        case 4:
            cout <<"-----PREGLED VOZILA U NOVOM SADU-----"<<endl;
            i2.ispisiVozila();
            cout<<"Da li zelite da sacuvate neko vozilo? (Y/N)"<<endl;
            cin>>sacuv;
            if(sacuv=='Y')
            {
                cout<<"Unesite id zeljenog vozila: ";
                cin>>sacuv2;

            }
            if(sacuv=='N')
            {
                cout<<"ne zeli da sacuva vozilo"<<endl;
            }
            break;
        case 5:
            cout <<"-----PREGLED VOZILA U BEOGRADU-----"<<endl;
            i.ispisiSvaVozila();
            cout<<"Da li zelite da sacuvate neko vozilo? (Y/N)"<<endl;
            cin>>sacuv;
            if(sacuv=='Y')
            {
                cout<<"Unesite id zeljenog vozila: ";
                cin>>sacuv2;

            }
            if(sacuv=='N')
            {
                cout<<"ne zeli da sacuva vozilo"<<endl;
            }
            break;

        }

    }
    while (izbor!=6);


    return 0;
}

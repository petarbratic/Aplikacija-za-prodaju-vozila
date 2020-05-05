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

int main()
{
    /* predlog funkcionalnosti
    1. logovanje, registrovanje korisnika i slanje pitanja prodavcu u vezi sa nekim vozilom
    2. kada se korisnik uloguje prikazuju mu se sva vozila koja su u ponudi, on moze da izabere da sacuva vozilo,
     ako oznaci da je kupio neko vozilo od tih saèuvanih ispisuje se ponuda na primer pneumatika, ulja, felni, ratkapni
    */

    string nasFajl = "korisnici.txt";

    Korisnik k1("Nikola", "Petric", 1, "064423523", "nikola123", "1234");
    k1.pisiTxt(nasFajl, k1, 'w');
    Korisnik k2 ("Nenad", "Lukic", 0, "065123543", "ekstranesa", "neskho");
    k2.pisiTxt(nasFajl, k2, 'a');
    Korisnik k3 ("Kosta", "Konstantinovic", 1, "060567432", "karatekosta", "kostaprekomosta");
    k3.pisiTxt(nasFajl, k3, 'a');
    k3.citajTxt(nasFajl);


    MestoProdaje mesto1("Srbija", "Toplicki", "Arandjelovac");
    mesto1.ispisiMestoProdaje();

    Menjac vm1 (AUTOMATSKI, 5);
    vm1.ispisiMenjac();

    Marka marka1("Volkswagen", 1937, "Nemacka");
    marka1.ispisiMarka();





    return 0;
}

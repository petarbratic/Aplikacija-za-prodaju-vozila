// POCINJE PROJEKAT
#include <iostream>

using namespace std;

class Korisnik{
    private:
        string ime;
        string prezime;
        string kupacIliProd; // ?
        int brojTelefona;
};
class Motor{
    private:
        int snaga;
        int zapremina;
        int kilometraza;
        string gorivo; // ?
};
class MestoProdaje{
    private:
        string drzava;
        string okrug; // ?
        string grad; 
};
class Skoljka{
    private:
        string boja; // ?
        string karoserija; // primer: limuzina (sedan), karavan, hecbek, SUV
        string materijal; // ?
};
class Registracija{
    private:
        int doKojeGodine; //do koje godine je registrovan
        string kategorija; // a, b, c, d, f
        string registarskaOznaka; // primer: NS 317 TG
};
class Marka{
    private:
        int godOsnivanja;
        string zemlja; // primer: bmw, audi, merc - nemacka, fiat, alfa, ferrari - italija 
};
class OpremaZaAuto{ 
    private:
        bool servoVolan;
        bool tempomat;
        bool svetlaZaMaglu;
        bool parkingSenzori;
        bool kuka;
        bool dpf;
        bool masazaSedista;
        bool klima;
};
class OpremaZaKamion{
    private:
        bool klima;
        bool navigacija;
        bool spavacaKabina;
        bool televizor;
        bool mikrotalasna;
        bool tempmat;
};
class Menjac{
    private:
        string vrsta; // ?  primer manuelni, automatski
        int brojStepenaPrenosa;
};
class Vozilo{
    Korisnik korisnik1;
    Motor motor1;
    MestoProdaje mestoprodaje1;
    Skolja skoljka1;
    Registracija registracija1;
    Marka marka1;
    OpremaZaAuto opremazaauto1;
    OpremaZaKamion Opremazakamion1;
    Menjac menjac1;
}
int main()
{
    cout<<"Hello World";

    return 0;
}

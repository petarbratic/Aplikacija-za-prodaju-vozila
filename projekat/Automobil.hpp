#ifndef AUTOMOBIL_HPP_INCLUDED
#define AUTOMOBIL_HPP_INCLUDED

#include "Vozilo.hpp"
#include "OpremaZaAuto.hpp"

class Automobil:public Vozilo{
private:
    OpremaZaAuto opremazaauto;
public:
        Automobil (Korisnik k, Motor m, MestoProdaje mesto, Skoljka sk, Registracija r, Marka mark, Menjac menja, OpremaZaAuto oprema){
        prodavac=k;
        motor=m;
        mestoprodaje=mesto;
        skoljka=sk;
        registracija=r;
        marka=mark;
        menja=menjac;
        oprema=opremazaauto;
    }
};


#endif // AUTOMOBIL_HPP_INCLUDED

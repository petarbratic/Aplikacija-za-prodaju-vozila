#ifndef OPREMAZAKAMION_HPP_INCLUDED
#define OPREMAZAKAMION_HPP_INCLUDED

#include "Oprema.hpp"

class OpremaZaKamion: public Oprema{
    private:
        bool spavacaKabina;
        bool televizor;
        bool mikrotalasna;
        bool retarder;
    public:
        OpremaZaKamion (bool Kamionklima, bool KamionNavi, bool spavanje, bool tv, bool pecnica, bool ret): Oprema(Kamionklima, KamionNavi){
            spavacaKabina=spavanje;
            televizor=tv;
            mikrotalasna=pecnica;
            retarder=ret;
        }
};

#endif // OPREMAZAKAMION_HPP_INCLUDED

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
        void ispisi ()const{
            Oprema::ispisi();

            if(spavacaKabina)
                std::cout <<"Spavaca kabina: "<< "da" << std::endl;
            else
                std::cout <<"Spavaca kabina: "<< "ne" << std::endl;
            if(televizor)
                std::cout <<"Televizor: "<< "da" << std::endl;
            else
                std::cout <<"Televizor: "<< "ne" << std::endl;
            if(mikrotalasna)
                std::cout <<"Mikrotalasna: "<< "da" << std::endl;
            else
                std::cout <<"Mikrotalasna: "<< "ne" << std::endl;
            if(retarder)
                std::cout <<"Retarder: "<< "da" << std::endl<<endl;
            else
                std::cout <<"Retarder: "<< "ne" << std::endl<<endl;
            }
};

#endif // OPREMAZAKAMION_HPP_INCLUDED

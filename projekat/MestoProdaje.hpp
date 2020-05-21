#ifndef MESTOPRODAJE_HPP_INCLUDED
#define MESTOPRODAJE_HPP_INCLUDED
#include <fstream>
#include <string>
#include <iostream>
class MestoProdaje{
    private:
        std::string drzava;
        std::string okrug;
        std::string grad;
    public:
        MestoProdaje (std::string dr, std::string okr, std::string gr){
            drzava=dr;
            okrug=okr;
            grad=gr;
        }
        void ispisiMestoProdaje ()const{
            std::cout <<"Vozilo se prodaje u: "<< drzava <<", "<<okrug<<" okrug, "<<grad<<std::endl;
        }
        friend std::ostream& operator<<(ostream& izlaz, const MestoProdaje& mp);

};

#endif // MESTOPRODAJE_HPP_INCLUDED

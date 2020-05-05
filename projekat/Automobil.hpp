#ifndef AUTOMOBIL_HPP_INCLUDED
#define AUTOMOBIL_HPP_INCLUDED

#include "Vozilo.hpp"
#include "OpremaZaAuto.hpp"

class Automobil:public Vozilo{
private:
    OpremaZaAuto opremazaauto;
public:
    Automobil (std::string Vime, std::string Vprezime, bool VkupacIliProd, std::string VbrojTelefona, std::string VkorisnickoIme, std::string Vlozinka,
                int Vsnaga, int Vzapremina, int Vkilometraza, Gorivo Vgorivo,
                std::string Vdrzava, std::string Vokrug, std::string Vgrad,
                std::string Vboja, Karoserija Vkaroserija, Materijal Vmaterijal,
                int VdoKojeGodine, std::string Vkategorija, std::string VregistarskaOznaka,
                std::string VnazivMarke, int VgodinaOsnivanja, std::string VzemljaOdakleJe,
                VrstaMenjaca Vvrsta, int VbrojStepenaPrenosa, bool Autoklima, bool Autonavigacija,
                bool srv, bool temp, bool magla, bool parking, bool kuk, bool fap, bool masaza):
                Vozilo (Vime, Vprezime, VkupacIliProd, VbrojTelefona, VkorisnickoIme, Vlozinka,
                        Vsnaga, Vzapremina, Vkilometraza, Vgorivo,
                        Vdrzava, Vokrug, Vgrad,
                        Vboja, Vkaroserija, Vmaterijal,
                        VdoKojeGodine, Vkategorija, VregistarskaOznaka,
                        VnazivMarke, VgodinaOsnivanja, VzemljaOdakleJe,
                        Vvrsta, VbrojStepenaPrenosa),
                opremazaauto (Autoklima, Autonavigacija, srv, temp, magla, parking, kuk, fap, masaza)
                {}
        void ispisiAutomobil (){
            ispisiVozilo();
            opremazaauto.ispisiOpremaZaAuto();
        }
};


#endif // AUTOMOBIL_HPP_INCLUDED

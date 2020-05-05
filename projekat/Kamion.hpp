#ifndef KAMION_HPP_INCLUDED
#define KAMION_HPP_INCLUDED
#include "Vozilo.hpp"
#include "OpremaZaKamion.hpp"


class Kamion : public Vozilo{
    private:
        OpremaZaKamion opremazakamion;
    public:
        Kamion (std::string Vime, std::string Vprezime, bool VkupacIliProd, std::string VbrojTelefona, std::string VkorisnickoIme, std::string Vlozinka,
                int Vsnaga, int Vzapremina, int Vkilometraza, Gorivo Vgorivo,
                std::string Vdrzava, std::string Vokrug, std::string Vgrad,
                std::string Vboja, Karoserija Vkaroserija, Materijal Vmaterijal,
                int VdoKojeGodine, std::string Vkategorija, std::string VregistarskaOznaka,
                std::string VnazivMarke, int VgodinaOsnivanja, std::string VzemljaOdakleJe,
                VrstaMenjaca Vvrsta, int VbrojStepenaPrenosa, bool Kamionklima, bool KamionNavi,
                bool spavanje, bool tv, bool pecnica, bool ret):
                Vozilo (Vime, Vprezime, VkupacIliProd, VbrojTelefona, VkorisnickoIme, Vlozinka,
                        Vsnaga, Vzapremina, Vkilometraza, Vgorivo,
                        Vdrzava, Vokrug, Vgrad,
                        Vboja, Vkaroserija, Vmaterijal,
                        VdoKojeGodine, Vkategorija, VregistarskaOznaka,
                        VnazivMarke, VgodinaOsnivanja, VzemljaOdakleJe,
                        Vvrsta, VbrojStepenaPrenosa),
                opremazakamion (Kamionklima, KamionNavi, spavanje, tv, pecnica, ret)
                {}
        void ispisiKamion (){
            ispisiVozilo();
            opremazakamion.ispisiOpremaZaKamion();
        }
};

#endif // KAMION_HPP_INCLUDED

#ifndef VOZILO_HPP_INCLUDED
#define VOZILO_HPP_INCLUDED
#include <fstream>
#include "Korisnik.hpp"
#include "Motor.hpp"
#include "MestoProdaje.hpp"
#include "Skoljka.hpp"
#include "Registracija.hpp"
#include "Marka.hpp"
#include "Menjac.hpp"

class Vozilo{
    protected:
        Korisnik prodavac;
        Motor motor;
        MestoProdaje mestoprodaje;
        Skoljka skoljka;
        Registracija registracija;
        Marka marka;
        Menjac menjac;
    public:
        Vozilo (std::string Vime, std::string Vprezime, bool VkupacIliProd, std::string VbrojTelefona, std::string VkorisnickoIme, std::string Vlozinka,
                int Vsnaga, int Vzapremina, int Vkilometraza, Gorivo Vgorivo,
                std::string Vdrzava, std::string Vokrug, std::string Vgrad,
                std::string Vboja, Karoserija Vkaroserija, Materijal Vmaterijal,
                int VdoKojeGodine, std::string Vkategorija, std::string VregistarskaOznaka,
                std::string VnazivMarke, int VgodinaOsnivanja, std::string VzemljaOdakleJe,
                VrstaMenjaca Vvrsta, int VbrojStepenaPrenosa):
                prodavac (Vime, Vprezime, VkupacIliProd, VbrojTelefona, VkorisnickoIme, Vlozinka),
                motor (Vsnaga, Vzapremina, Vkilometraza, Vgorivo),
                mestoprodaje (Vdrzava, Vokrug, Vgrad),
                skoljka (Vboja, Vkaroserija, Vmaterijal),
                registracija (VdoKojeGodine, Vkategorija, VregistarskaOznaka),
                marka (VnazivMarke, VgodinaOsnivanja, VzemljaOdakleJe),
                menjac (Vvrsta, VbrojStepenaPrenosa)
                {}


};


#endif // VOZILO_HPP_INCLUDED

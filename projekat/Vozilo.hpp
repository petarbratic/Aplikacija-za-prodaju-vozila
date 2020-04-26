#ifndef VOZILO_HPP_INCLUDED
#define VOZILO_HPP_INCLUDED

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
        Skolja skoljka;
        Registracija registracija;
        Marka marka;
        Menjac menjac;
    public:
        Vozilo (string Vime, string Vprezime, bool VkupacIliProd, string VbrojTelefona, string VkorisnickoIme, string Vlozinka,
                int Vsnaga, int Vzapremina, int Vkilometraza, Gorivo Vgorivo,
                string Vdrzava, string Vokrug, string Vgrad,
                string Vboja, Karoserija Vkaroserija, Materijal Vmaterijal,
                int VdoKojeGodine, string Vkategorija, string VregistarskaOznaka,
                string VnazivMarke, int VgodinaOsnivanja, string VzemljaOdakleJe,
                VrstaMenjaca Vvrsta, int VbrojStepenaPrenosa):
                Korisnik (Vime, Vprezime, VkupaciliProd, VbrojTelefona, VkorisnickoIme, Vlozinka),
                Motor (Vsnaga, Vzapremina, Vkilometraza, Vgorivo),
                MestoProdaje (Vdrzava, Vokrug, Vgrad),
                Skoljka (Vboja, Vkaroserija, Vmaterijal),
                Registracija (VdoKojeGodine, Vkategorija, VregistarskaOznaka),
                Marka (VnazivMarke, VgodinaOsnivanja, VzemljaOdakleJe),
                Menjac (Vvrsta, VbrojStepenaPrenosa)
                {}
}


#endif // VOZILO_HPP_INCLUDED

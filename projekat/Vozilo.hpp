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
        int id;
        Korisnik prodavac;
        Motor motor;
        MestoProdaje mestoprodaje;
        Skoljka skoljka;
        Registracija registracija;
        Marka marka;
        Menjac menjac;
        static int brojVozila;
    public:
        Vozilo (int Vid, std::string Vime, std::string Vprezime, bool VkupacIliProd, std::string VbrojTelefona, std::string VkorisnickoIme, std::string Vlozinka,
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
                {brojVozila++;
                id=Vid;}
        virtual void ispisi (){
            prodavac.ispisiKorisnik();
            motor.ispisiMotor();
            mestoprodaje.ispisiMestoProdaje();
            skoljka.ispisiSkoljka();
            registracija.ispisiRegistracija();
            marka.ispisiMarka();
            menjac.ispisiMenjac();
        }

        void ispisiBrojVozila(){
            std::cout << brojVozila <<std::endl;
        }
        ~Vozilo(){
            brojVozila--;
        }

};



#endif // VOZILO_HPP_INCLUDED

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
}


#endif // VOZILO_HPP_INCLUDED

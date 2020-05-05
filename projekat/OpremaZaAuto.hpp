#ifndef OPREMAZAAUTO_HPP_INCLUDED
#define OPREMAZAAUTO_HPP_INCLUDED

#include "Oprema.hpp"

class OpremaZaAuto: public Oprema{
    private:
        bool servoVolan;
        bool tempomat;
        bool svetlaZaMaglu;
        bool parkingSenzori;
        bool kuka;
        bool dpf;
        bool masazaSedista;
    public:
        OpremaZaAuto(bool Autoklima, bool Autonavigacija, bool srv, bool temp, bool magla, bool parking, bool kuk, bool fap, bool masaza):Oprema (Autoklima, Autonavigacija) {
            servoVolan=srv;
            tempomat=temp;
            svetlaZaMaglu=magla;
            parkingSenzori=parking;
            kuka=kuk;
            dpf=fap;
            masazaSedista=masaza;
        }
        bool UnaprediAuto (){
            if(servoVolan==0 && parkingSenzori==0 && masazaSedista==0){
                servoVolan=1;
                parkingSenzori=1;
                masazaSedista=1;
                return true;
            }
            return false;
        }
        bool SkiniDPF (){
            if (dpf==1){
                dpf=0;
                return true;
            }
            return false;
        }
        bool UgradiKuku (){
            if (kuka==0){
                kuka=1;
                return true;
            }
            return false;
        }
        void ispisiOpremaZaAuto (){
            ispisiOprema();
            std::cout << servoVolan << std::endl;
            std::cout << tempomat << std::endl;
            std::cout << svetlaZaMaglu << std::endl;
            std::cout <<parkingSenzori << std::endl;
            std::cout <<kuka << std::endl;
            std::cout << dpf << std::endl;
            std::cout << masazaSedista << std::endl;
        }
};

#endif // OPREMAZAAUTO_HPP_INCLUDED

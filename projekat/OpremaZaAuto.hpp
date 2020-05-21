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
        void ispisi()const{
            Oprema::ispisi();

            if(servoVolan)
                std::cout <<"Servo volan: "<< "da" << std::endl;
            else
                std::cout <<"Servo volan: "<< "ne" << std::endl;
            if(tempomat)
                std::cout <<"Tempomat: "<< "da" << std::endl;
            else
                std::cout <<"Tempomat: "<< "ne" << std::endl;
            if(svetlaZaMaglu)
                std::cout <<"Svetla za maglu: "<< "da" << std::endl;
            else
                std::cout <<"Svetla za maglu: "<< "ne" << std::endl;
            if(parkingSenzori)
                std::cout <<"Parking senzori: "<< "da" << std::endl;
            else
                std::cout <<"Parking senzori: "<< "ne" << std::endl;
            if(kuka)
                std::cout <<"Kuka: "<< "da" << std::endl;
            else
                std::cout <<"Kuka: "<< "ne" << std::endl;
            if(dpf)
                std::cout <<"DPF: "<< "da" << std::endl;
            else
                std::cout <<"DPF: "<< "ne" << std::endl;
            if(masazaSedista)
                std::cout <<"Masaza sedista: "<< "da" << std::endl<<endl;
            else
                std::cout <<"Masaza sedista: "<< "ne" << std::endl<<endl;
            }
};

#endif // OPREMAZAAUTO_HPP_INCLUDED

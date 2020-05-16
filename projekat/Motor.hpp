#ifndef MOTOR_HPP_INCLUDED
#define MOTOR_HPP_INCLUDED
#include <fstream>
#include <string>
#include <iostream>
enum Gorivo {BENZIN, DIZEL, BENZINIGAS, STRUJA, HIBRID};
class Motor{
    private:
        int snaga;
        int zapremina;
        int kilometraza;
        Gorivo gorivo;
    public:
        Motor (int power, int cc, int vracana, Gorivo napitak){
            snaga=power;
            zapremina=cc;
            kilometraza=vracana;
            gorivo=napitak;
        }
        bool UgradnjaPlina (){
            if(gorivo==BENZIN && snaga>0){
                gorivo=BENZINIGAS;
                snaga--;  //ugradnjom plina se snaga automobila minimalno smanji, pa zato -1
                return true;
            }
            return false;
        }
        void ispisiMotor (){
            std::cout <<"Snaga motora je: "<< snaga <<" ks"<< std::endl;
            std::cout <<"Zapremina motora je: "<< zapremina <<" cc"<< std::endl;
            std::cout <<"Vozilo je preslo: "<< kilometraza <<" km"<< std::endl;
            cout<< "Vozilo ide na: ";
            switch (gorivo){
                case 0: {std::cout << "benzin" << std::endl;
                        break;}
                case 1: {std::cout << "dizel" << std::endl;
                        break;}
                case 2: {std::cout << "plin" << std::endl;
                        break;}
                case 3: {std::cout << "struju" << std::endl;
                        break;}
                case 4: {std::cout << "struju i benzin" << std::endl;
                        break;}
            }


}
    friend std::ostream& operator<<(std::ostream& izlaz, const Motor& engine);
};

#endif // MOTOR_HPP_INCLUDED
